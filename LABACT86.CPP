#include <iostream>
using namespace std;

/* a node of the doubly linked list */
class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

/* Function to delete a node in a Doubly Linked List */
void deleteNode(Node** head_ref, Node* del) {
    // Base case
    if (*head_ref == NULL || del == NULL)
        return;

    // If node to be deleted is head node
    if (*head_ref == del)
        *head_ref = del->next;

    // Change next only if node to be deleted is NOT the last node
    if (del->next != NULL)
        del->next->prev = del->prev;

    // Change prev only if node to be deleted is NOT the first node
    if (del->prev != NULL)
        del->prev->next = del->next;

    // Free memory
    delete del;
}

/* Function to insert a node at the beginning of the Doubly Linked List */
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

/* Function to print nodes in a given doubly linked list */
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "NULL" << endl;
}

/* Driver code */
int main() {
    Node* head = NULL;

    // Create the doubly linked list: 10<->8<->4<->2
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout << "Original Linked list: ";
    printList(head);

    // Delete nodes from the list
    deleteNode(&head, head);           // delete first node (10)
    deleteNode(&head, head->next);     // delete middle node (4)
    deleteNode(&head, head->next);     // delete last node (2)

    cout << "\nModified Linked list: ";
    printList(head);

    return 0;
}
