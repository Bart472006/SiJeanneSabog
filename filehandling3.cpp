#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() { // Added return type 'int' for main function
    string line;
    ifstream myfile("example.txt"); // Open the file "example.txt" for reading

    if (myfile.is_open()) { // Check if the file is successfully opened
        while (getline(myfile, line)) { // Read the file line by line
            cout << line << '\n'; // Print each line to the console
        }
        myfile.close(); // Close the file after reading
    } else {
        cout << "Unable to open file"; // Error message if the file cannot be opened
    }

    system("pause"); // Pause the program (Windows-specific)
    return 0; // Return 0 to indicate successful execution
}