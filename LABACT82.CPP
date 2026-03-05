// RAIDEN MUNOZ
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// This function prints contents of linked list starting from the given node
void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << endl;
        n = n->next;
    }
}

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // Allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;       // Assign data in first node
    head->next = second;  // Link first node with second

    second->data = 2;     // Assign data to second node
    second->next = third; // Link second node with third

    third->data = 3;      // Assign data to third node
    third->next = NULL;   // Terminate the list

    printList(head);
    system("pause");
    return 0;
}