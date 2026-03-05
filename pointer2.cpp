#include <iostream>
using namespace std;

// Declare a string variable and a pointer to it
string name = "Moalla";
string* namePtr = &name; // Pointer to the variable 'name'

int main() {
    // Print the value of the variable
    cout << "Value of name: " << name << endl;

    // Print the memory address of the variable
    cout << "Address of name: " << &name << endl;

    // Print the value stored in the pointer (address of 'name')
    cout << "Value of namePtr (address of name): " << namePtr << endl;

    // Print the memory address of the pointer itself
    cout << "Address of namePtr: " << &namePtr << endl;

    return 0;
}