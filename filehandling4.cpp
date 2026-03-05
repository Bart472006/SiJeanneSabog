#include <fstream>
#include <iostream>
using namespace std;

int main() { // Added return type 'int' for main function
    char data[100];

    // Open a file in write mode
    ofstream outfile;
    outfile.open("afile.dat");

    if (!outfile) { // Check if the file was successfully opened
        cout << "Error: Unable to open file for writing." << endl;
        return 1;
    }

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // Write inputted data into the file
    outfile << data << endl;

    cout << "Enter your age: ";
    cin.getline(data, 100); // Use getline to handle input properly

    // Write inputted data into the file
    outfile << data << endl;

    // Close the opened file
    outfile.close();

    // Open a file in read mode
    ifstream infile;
    infile.open("afile.dat");

    if (!infile) { // Check if the file was successfully opened
        cout << "Error: Unable to open file for reading." << endl;
        return 1;
    }

    cout << "Reading from the file" << endl;

    // Read the data from the file and display it
    while (infile.getline(data, 100)) { // Use getline to read each line
        cout << data << endl;
    }

    // Close the opened file
    infile.close();

    return 0; // Indicate successful execution
}