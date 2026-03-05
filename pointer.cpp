#include <iostream>
using namespace std;

string food = "Pizza";
string* foodPtr = &food; // Declare foodPtr as a pointer to a string

int main() {
    cout << "Food: " << food << endl;          // Print the value of food
    cout << "Pointer: " << foodPtr << endl;    // Print the memory address stored in foodPtr
    cout << "Address of food: " << &food << endl; // Print the memory address of food
    cout << "Address of foodPtr: " << &foodPtr << endl; // Print the memory address of foodPtr
}