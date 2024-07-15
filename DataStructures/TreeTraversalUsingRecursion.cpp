#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
void printPreOrderTree(Node* root){
    if (root == nullptr) return;
    cout << root->data << " ";
    printPreOrderTree(root->left);
    printPreOrderTree(root->right);
}
void printInOrderTree(Node* root){
    if (root == nullptr) return;
    printInOrderTree(root->left);
    cout << root->data << " ";
    printInOrderTree(root->right);
}
void printPostOrderTree(Node* root){
    if (root == nullptr) return;
    printPostOrderTree(root->left);
    printPostOrderTree(root->right);
    cout << root->data << " ";
}
int main() {
    // Implement The Tree
    Node* newRoot = createNode(1);
    newRoot->left = createNode(2);
    newRoot->right = createNode(3);
    newRoot->left->left = createNode(4);
    newRoot->left->right = createNode(5);
    newRoot->right->left = createNode(6);
    newRoot->right->right = createNode(7);
    newRoot->left->right->left = createNode(9);
    newRoot->right->right->left = createNode(15);
//    printPreOrderTree(newRoot);
//    printInOrderTree(newRoot);
    printPostOrderTree(newRoot);
    return 0;
    // DLR -> 1 2 4 5 9 3 6 7 15
    // LDR -> 4 2 9 5 1 6 3 15 7
    // LRD -> 4 9 5 2 6 15 7 3 1
}
