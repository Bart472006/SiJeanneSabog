#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data) root->left = insert(root->left, key);
    else root->right = insert(root->right, key);
    return root;
}

bool search(Node* root, int key) {
    if (!root) return false;
    if (key == root->data) return true;
    return key < root->data ? search(root->left, key) : search(root->right, key);
}

Node* findMin(Node* root) {
    while (root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void displayConnections(Node* root) {
    if (!root) return;
    if (root->left)
        cout << root->data << " → " << root->left->data << " (left)" << endl;
    if (root->right)
        cout << root->data << " → " << root->right->data << " (right)" << endl;
    displayConnections(root->left);
    displayConnections(root->right);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << "\nNode Connections:\n";
    displayConnections(root);

    cout << "\nSearch 40: " << (search(root, 40) ? "Found" : "Not Found") << endl;

    root = deleteNode(root, 50);
    cout << "Inorder after deletion: ";
    inorder(root);
    cout << "\nUpdated Node Connections:\n";
    displayConnections(root);

    return 0;
}