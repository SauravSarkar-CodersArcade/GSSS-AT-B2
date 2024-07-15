#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    explicit Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
int main() {
    // Creating the Nodes one by one
    Node* root = new Node(1);
    Node* leftChild = new Node(2);
    Node* rightChild = new Node(3);
    Node* leftGrandChild = new Node(4);
    Node* leftGrandChildLeftChild = new Node(5);

    // Building the tree
    root->left = leftChild;
    root->right = rightChild;
    leftChild->left = leftGrandChild;
    leftGrandChild->left = leftGrandChildLeftChild;

    // Print the data:
    cout << "Root data: " << root->data << endl;
    cout << "Left Child Data: " << leftChild->data << endl;
    cout << "Right Child Data: " << rightChild->data << endl;
    cout << "Left GrandChild Data: " << leftGrandChild->data << endl;

    // De-allocation
    delete root;
    delete leftChild;
    delete rightChild;
    delete leftGrandChild;
    delete leftGrandChildLeftChild;
    return 0;
}
