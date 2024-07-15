#include <iostream>
using namespace std;
struct Node {
    int value;
    Node* left;
    Node* right;
    Node(int val) : value(val), left(nullptr), right(nullptr){}
};
bool areIdentical(Node* tree1, Node* tree2){
    if (tree1 == nullptr && tree2 == nullptr){
        return true;
    }
    if (tree1 == nullptr || tree2 == nullptr){
        return false;
    }
    // Compare the root data
    if (tree1->value != tree2->value){
        return false;
    }
    // Left & Right Subtrees
    return (areIdentical(tree1->left, tree2->left) &&
    areIdentical(tree1->right, tree2->right));
}
void identifyAndCutDownTrees(Node* tree1, Node* tree2){
    // Check whether the trees are identical or not
    if (areIdentical(tree1, tree2)){
        cout << "Identical. Cut them down." << endl;
    }else{
        cout << "Not Identical. Cannot Cut them down." << endl;
    }
}
int main() {
    // Create two trees
    Node* tree1 = new Node(7);
    tree1->left = new Node(3);
    tree1->right = new Node(4);

    Node* tree2 = new Node(7);
    tree2->left = new Node(3);
    tree2->right = new Node(2);

    identifyAndCutDownTrees(tree1, tree2);
    return 0;
}
