#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() : root(nullptr) {}

    // Function to perform in-order traversal (Left, Root, Right)
    void inOrder(Node* node) {
        if (node == nullptr) return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    // Function to perform pre-order traversal (Root, Left, Right)
    void preOrder(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    // Function to perform post-order traversal (Left, Right, Root)
    void postOrder(Node* node) {
        if (node == nullptr) return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
    

    void displayConnections(Node* node) {
        if (node == nullptr) return;
        if (node->left) {
            cout << node->data << " -> " << node->left->data << " (left)" << endl;
            displayConnections(node->left);
        }
        if (node->right) {
            cout << node->data << " -> " << node->right->data << " (right)" << endl;
            displayConnections(node->right);
        }
    }
};

int main() {
    BinaryTree tree;

    // Creating a simple binary tree
    tree.root = new Node('A');
    tree.root->left = new Node('B');
    tree.root->right = new Node('C');
    tree.root->left->left = new Node('D');
    tree.root->left->right = new Node('E');
    tree.root->right->left = new Node('F');
    tree.root->right->right = new Node('G');

    cout << "Parent-Child Connections:" << endl;
    tree.displayConnections(tree.root);
    cout << endl;

    cout << "In-order Traversal: ";
    tree.inOrder(tree.root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    tree.preOrder(tree.root);
    cout << endl;

    cout << "Post-order Traversal: ";
    tree.postOrder(tree.root);
    cout << endl;


    return 0;
}