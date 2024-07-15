#include <iostream>
using namespace std;
// Forward
// Insert (End, Begin, After Specific)
class Node {
public:
    int value;
    Node* next;
};
void printListElements(Node* node){
    // Edge Case
    while (node != nullptr){
        cout << node->value << "->";
        node = node->next;
    }
    cout << "null" << endl;
}
void insertAtFront(Node** head, int newValue){
    // 1 Prepare a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    // 2 Place the new node on front of the head
    newNode->next = *head;
    // 3 Move the head to point to the newNode
    *head = newNode;
}
void insertAtEnd(Node** head, int newValue){
    // 1. Create the node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = nullptr;
    // Empty list:
    if (*head == nullptr){
        *head = newNode;
        return;
    }
    // If we have some nodes
    Node* last = *head;
    while (last->next != nullptr){
        last = last->next;
    }
    // Insert newNode after last
    last->next = newNode;
}
void insertAfterSpecific(Node* previous, int newValue){
    // 1 . Previous is null
    if (previous == nullptr){
        cout << "Previous node cannot be null" << endl;
    }
    // 2. Previous is not null
    // Create a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    // 3. Insert new node after previous node
    newNode->next = previous->next;
    previous->next = newNode;
}
Node* reverseLinkedList(Node* head){
    // If empty or one node
    if (head == nullptr || head->next == nullptr){
        return head;
    }
    Node* prev = nullptr;
    Node* curr = head;
    Node* forward = nullptr;
    while(curr != nullptr){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = fourth;
    fourth->value = 4;
    fourth->next = nullptr;
    insertAtFront(&head, 0);
    insertAtEnd(&head, 6);
    insertAfterSpecific(fourth, 5);
    cout << "Normal Linked List: " << endl;
    printListElements(head);
    head = reverseLinkedList(head);
    cout << "Reversed Linked List: " << endl;
    printListElements(head);
    return 0;
}
