#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

// Inserts a new node on the front of the list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

// Inserts a new node before the given next_node
void insertBefore(Node** head_ref, Node* next_node, int new_data) {
    if (next_node == NULL) {
        cout << "The given next node cannot be NULL" << endl;
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->prev = next_node->prev;
    next_node->prev = new_node;
    new_node->next = next_node;

    if (new_node->prev != NULL)
        new_node->prev->next = new_node;
    else
        (*head_ref) = new_node;
}

// Prints contents of linked list from head and then in reverse
void printList(Node* node) {
    Node* last = NULL;
    cout << "Traversal in forward direction:  ";
    while (node != NULL) {
        cout << node->data << "->";
        last = node;
        node = node->next;
    }
    cout << "NULL" << endl;

    cout << "Traversal in reverse direction:  ";
    while (last != NULL) {
        cout << last->data << "->";
        last = last->prev;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    // Create initial node
    head = new Node();
    head->data = 7;
    head->next = NULL;
    head->prev = NULL;

    push(&head, 1);
    push(&head, 4);

    // Insert 8 before node with value 1
    insertBefore(&head, head->next, 8);

    cout << "Created Doubly Linked List is: " << endl;
    printList(head);

    return 0;
}
