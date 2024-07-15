#include <iostream>
using namespace std;
// Node class to represent elements in the linked list
class Node {
public:
    int value;
    Node* next;
};

// Function to print elements of the linked list
void printListElements(Node* node) {
    while (node != nullptr) {
        cout << node->value << "->";
        node = node->next;
    }
    cout << "null" << endl;
}

// Function to insert a new node at the front of the linked list
void insertAtFront(Node** head, int newValue) {
    // Create a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    // Set the new node's next pointer to the current head
    newNode->next = *head;
    // Move the head to the new node
    *head = newNode;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node** head, int newValue) {
    // Create a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = nullptr;

    // If the list is empty, set the new node as the head
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    // Traverse to the end of the list and insert the new node
    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
}

// Function to insert a new node after a specific node in the linked list
void insertAfterSpecific(Node* previous, int newValue) {
    // Check if the previous node is null
    if (previous == nullptr) {
        cout << "Previous node cannot be null" << endl;
        return;
    }

    // Create a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    // Insert the new node after the specified previous node
    newNode->next = previous->next;
    previous->next = newNode;
}

// Function to reverse the linked list
Node* reverseLinkedList(Node* head) {
    // If the list is empty or has only one node, return the head
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Initialize pointers for the reversal process
    Node* prev = nullptr;
    Node* curr = head;
    Node* forward = nullptr;

    // Traverse the list and reverse the pointers
    while (curr != nullptr) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    // Return the new head of the reversed list
    return prev;
}

// Function to delete the front node of the linked list
void deleteFront(Node** head) {
    // Check if the list is empty
    if (*head == nullptr) {
        cout << "List is empty. Cannot delete from the front." << endl;
        return;
    }

    // Temporarily store the head node
    Node* temp = *head;
    // Move the head to the next node
    *head = (*head)->next;
    // Delete the original head node
    delete temp;
}

// Function to delete the end node of the linked list
void deleteEnd(Node** head) {
    // Check if the list is empty
    if (*head == nullptr) {
        cout << "List is empty. Cannot delete from the end." << endl;
        return;
    }

    // Check if there is only one node in the list
    if ((*head)->next == nullptr) {
        delete *head;
        *head = nullptr;
        return;
    }

    // Traverse to the end of the list and delete the last node
    Node* last = *head;
    Node* secondLast = nullptr;
    while (last->next != nullptr) {
        secondLast = last;
        last = last->next;
    }

    delete last;
    secondLast->next = nullptr;
}

// Function to delete a node with a specific value from the linked list
void deleteNodeWithValue(Node** head, int targetValue) {
    // Check if the list is empty
    if (*head == nullptr) {
        cout << "List is empty. Cannot delete the specified value." << endl;
        return;
    }

    // Check if the target value is in the head node
    if ((*head)->value == targetValue) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }

    // Traverse the list to find the node with the target value
    Node* current = *head;
    Node* previous = nullptr;

    while (current != nullptr && current->value != targetValue) {
        previous = current;
        current = current->next;
    }

    // Check if the target value is not found in the list
    if (current == nullptr) {
        cout << "Value not found in the list." << endl;
        return;
    }

    // Delete the node with the target value
    previous->next = current->next;
    delete current;
}

// Main function to demonstrate the linked list operations
int main() {
    Node* head = nullptr;

    // Insert elements into the linked list
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtFront(&head, 0);

    // Print the original linked list
    cout << "Original List: ";
    printListElements(head);

    // Delete the front node and print the updated list
    deleteFront(&head);
    cout << "After deleting from the front: ";
    printListElements(head);

    // Delete the end node and print the updated list
    deleteEnd(&head);
    cout << "After deleting from the end: ";
    printListElements(head);

    // Delete a node with a specific value and print the updated list
    int targetValue = 2;
    deleteNodeWithValue(&head, targetValue);
    cout << "After deleting node with value " << targetValue << ": ";
    printListElements(head);
    reverseLinkedList(head);
    printListElements(head);
    return 0;
}
