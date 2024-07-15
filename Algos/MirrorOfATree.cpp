#include <iostream>
using namespace std;
struct treeNode {
    int val;
    struct treeNode* left;
    struct treeNode* right;
};
treeNode* createNode(int val){
    auto* newNode = (treeNode*) malloc(sizeof(treeNode));
    newNode->val = val;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}
void printInOrderTraversal(treeNode* root){
    if (root == nullptr){
        return;
    }
    // Left Data Right
    printInOrderTraversal(root->left);
    cout << root->val << " ";
    printInOrderTraversal(root->right);
}
treeNode* mirrorTree(treeNode* root){
    if (root == nullptr){
        return root;
    }
    treeNode* tempNode = root->left;
    root->left = root->right;
    root->right = tempNode;
    // Left subtree
    if (root->left){
        mirrorTree(root->left);
    }
    // Right subtree
    if (root->right){
        mirrorTree(root->right);
    }
    return root;
}
int main() {
    // Tree
    treeNode* tree = createNode(7);
    tree->left = createNode(3);
    tree->right = createNode(2);
    tree->left->left = createNode(16);
    tree->right->right = createNode(91);
    cout << "In Order Traversal Of Original Tree: " << endl;
    printInOrderTraversal(tree);
    cout << endl;
    mirrorTree(tree);
    cout << "In Order Traversal Of Mirror Tree: " << endl;
    printInOrderTraversal(tree);
    return 0;
}
