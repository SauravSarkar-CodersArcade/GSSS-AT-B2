#include <iostream>

class BST {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;
        Node(int val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insert(Node* root, int val) {
        if (root == nullptr) {
            return new Node(val);
        }
        if (val < root->data) {
            root->left = insert(root->left, val);
        } else if (val > root->data) {
            root->right = insert(root->right, val);
        }
        return root;
    }

    Node* search(Node* root, int val) {
        if (root == nullptr || root->data == val) {
            return root;
        }
        if (val < root->data) {
            return search(root->left, val);
        }
        return search(root->right, val);
    }

    void inorderTraversal(Node* root) {
        if (root != nullptr) {
            inorderTraversal(root->left);
            std::cout << root->data << " ";
            inorderTraversal(root->right);
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int val) {
        root = insert(root, val);
    }

    bool search(int val) {
        return search(root, val) != nullptr;
    }

    void inorderTraversal() {
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BST bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Inorder Traversal of BST: ";
    bst.inorderTraversal();

    int searchValue = 40;
    if (bst.search(searchValue)) {
        std::cout << searchValue << " is found in the BST." << std::endl;
    } else {
        std::cout << searchValue << " is not found in the BST." << std::endl;
    }

    return 0;
}
