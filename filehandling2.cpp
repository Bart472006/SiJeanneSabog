#include <iostream>
#include <fstream>
using namespace std;

int main() { // Added return type 'int' for main function
    ofstream myfile("example.txt"); // Create and open a file named "example.txt"
    
    if (myfile.is_open()) { // Check if the file is successfully opened
        myfile << "This is a line.\n"; // Write to the file
        myfile << "This is another line.\n"; // Write another line to the file
        myfile.close(); // Close the file
        cout << "File written successfully.\n"; // Inform the user
    } else {
        cout << "Unable to open file"; // Error message if the file cannot be opened
    }

    system("pause"); // Pause the program (Windows-specific)
    return 0; // Return 0 to indicate successful execution
}