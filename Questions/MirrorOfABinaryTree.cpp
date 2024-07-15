#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr){}
};
void inOrderTraversal(TreeNode* root){ // LDR
    if (root != nullptr){
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
TreeNode* mirrorTree(TreeNode* root){
    if (root == nullptr){
        return root;
    }
    TreeNode* tempNode = root->left;
    root->left = root->right;
    root->right = tempNode;
    // Recursive Call to swap the left & right subtrees
    if(root->left){
        mirrorTree(root->left);
    }
    if (root->right){
        mirrorTree(root->right);
    }
    return root;
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    cout << "InOrder Traversal of the Original Tree: ";
    inOrderTraversal(root);
    cout << endl;
    root = mirrorTree(root);
    cout << "InOrder Traversal of the Mirror Tree: ";
    inOrderTraversal(root);
    cout << endl;
    return 0;
}
