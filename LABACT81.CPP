// RAIDEN MUNOZ
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// Print the linked list
void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout << "NULL" << endl;
}

// Program to create a simple linked list with 3 nodes
int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // Allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    // Assign data and link the nodes
    head->data = 1;       // Assign data in first node
    head->next = second;  // Link first node with the second node

    second->data = 2;     // Assign data to second node
    second->next = third; // Link second node with the third node

    third->data = 3;      // Assign data to third node
    third->next = NULL;   // Terminate the list

    // Print the linked list
    cout << "The linked list is: ";
    printList(head);

    return 0;
}