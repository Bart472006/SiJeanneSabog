#include<iostream>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;
};

// Function to insert a new node at the front of the list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to delete the first occurrence of key in linked list
void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = nullptr;

    // If head node itself holds the key to be deleted
    if (temp != nullptr && temp->data == key) {
        *head_ref = temp->next; // Change head
        delete temp;            // Free old head
        return;
    }

    // Search for the key to be deleted
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == nullptr)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;
    delete temp; // Free memory
}

// Function to print linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "NULL" << endl;
}

// Driver code
int main() {
    Node* head = nullptr;

    // Create linked list 2->3->1->7
    head = new Node();
    head->data = 7;
    head->next = nullptr;

    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    cout << "Created Linked List: ";
    printList(head);

    deleteNode(&head, 1);

    cout << "Linked List after Deletion of Node with value 1: ";
    printList(head);

    return 0;
}
