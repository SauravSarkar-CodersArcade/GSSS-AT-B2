#include <iostream>
using namespace std;
struct Node {
    int value;
    Node* left;
    Node* right;
    Node(int val) : value(val), left(nullptr), right(nullptr){}
};
bool areIdentical(Node* tree1, Node* tree2){
    // Check whether both the trees are null
    if (tree1 == nullptr && tree2 == nullptr){
        return true;
    }
    // Check if one of the trees is null
    if (tree1 == nullptr || tree2 == nullptr){
        return false;
    }
    // Check if the values of the root nodes are equal
    if (tree1->value != tree2->value){
        return false;
    }
    // Recursively call the same function for the left and right subtrees
    return (areIdentical(tree1->left, tree2->left) &&
    areIdentical(tree1->right, tree2->right));
}
void identifyAndCutTrees(Node* tree1, Node* tree2){
    // Check if they are identical
    if (areIdentical(tree1, tree2)){
        cout << "Identical trees found. Cut them down...!!!" << endl;
    }else{
        cout << "Trees are not identical. Continue searching the forest." << endl;
    }
}
int main() {
    // Create two trees
    Node* tree1 = new Node(1);
    tree1->left = new Node(2);
    tree1->right = new Node(3);

    Node* tree2 = new Node(3);
    tree2->left = new Node(2);
    tree2->right = new Node(3);

    identifyAndCutTrees(tree1, tree2);

    // Clean up the memory
    delete tree1->left;
    delete tree1->right;
    delete tree1;
    delete tree2->left;
    delete tree2->right;
    delete tree2;
    return 0;
}
