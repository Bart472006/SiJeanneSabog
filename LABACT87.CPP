#include <iostream>
using namespace std;

/* structure for a node */
class Node {
public:
    int data;
    Node* next;
};

/* Function to insert a node at the beginning of a Circular linked list */
void push(Node** head_ref, int data) {
    Node* ptr1 = new Node();
    Node* temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;

    // If the linked list is not empty
    if (*head_ref != NULL) {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    } else {
        // For the first node
        ptr1->next = ptr1;
    }

    // Move the head to point to the new node
    *head_ref = ptr1;
}

/* Function to print nodes in a given Circular linked list */
void printList(Node* head) {
    Node* temp = head;

    if (head != NULL) {
        do {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);
    }

    cout << "HEAD\n";  // to indicate circular end
}

/* Driver program to test above functions */
int main() {
    Node* head = NULL;

    // Created linked list will be 11->2->56->12->HEAD
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);

    cout << "Contents of Circular Linked List: ";
    printList(head);

    return 0;
}
