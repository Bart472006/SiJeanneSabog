#include <iostream>
using namespace std;

// Define type aliases for better readability
typedef int integers;
typedef unsigned int uint;
typedef char* pchar;

int main() {
    uint andy = 6;         // Declare an unsigned integer variable and initialize it
    uint* ted = &andy;     // Declare a pointer to 'andy' and store its address

    // Print the memory address of 'andy'
    cout << "Address of andy: " << &andy << endl;

    // Print the value stored in the pointer 'ted' (address of 'andy')
    cout << "Value of ted (address of andy): " << ted << endl;

    // Dereference the pointer 'ted' to get the value of 'andy'
    cout << "Value of andy (via *ted): " << *ted << endl;

    return 0;
}