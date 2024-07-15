#include <iostream>
using namespace std;
class Node {
public:
    int Value;
    Node* Next;
};
void PrintList(Node* n){
    while (n != nullptr){
        cout << n->Value << " ";
        n = n->Next;
    }
}
void insertAtFront(Node**head, int newValue){
    // 1. Prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    // 2. Place it in front of the current head
    newNode->Next = *head;
    // 3. Move the head of the list to point to the new node
    *head = newNode;
}
void insertAtTheEnd(Node**head, int newValue){
    // 1. Prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = nullptr;
    // 2. If the list is empty, newNode will become the First Node
    if (*head == nullptr){
        *head = newNode;
        return;
    }
    // 3. Else, if the list is not empty, find the last node
    Node* last = *head;
    while (last->Next != nullptr){
        last = last->Next;
    }
    // 4. Insert the newNode after the last node (at the end)
    last->Next = newNode;
}
void insertAfterSpecificNode(Node*previous, int newValue){
    // 1. Check if the previous node is null
    if (previous == nullptr){
        cout << "The Previous Node cannot be null";
    }
    // 2. Prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    // 3. Insert the new node after the previous node
    newNode->Next = previous->Next;
    previous->Next = newNode;
}
int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = nullptr;
    insertAtFront(&head, 0);
    insertAtTheEnd(&head, 4);
    insertAtTheEnd(&head, 5);
    insertAtTheEnd(&head, 7);
    insertAfterSpecificNode(second, 10);
    insertAfterSpecificNode(nullptr, 200);
    PrintList(head);
    return 0;
}
