#include <iostream>
#include <vector>
#include <cctype>  // For std::toupper

using namespace std;

// Define locations and their indexes using letters (A, B, C, etc.)
char locations[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
int distances[9][9] = {
    {0, 2, 1000, 4, 1000, 1000, 1000, 1000, 1000}, // A
    {2, 0, 5, 1000, 1000, 1000, 1000, 1000, 1000}, // B
    {1000, 5, 0, 1, 3, 1000, 1000, 1000, 1000},    // C
    {4, 1000, 1, 0, 3, 1000, 1000, 1000, 1000},    // D
    {1000, 1000, 3, 3, 0, 2, 4, 1, 1},             // E
    {1000, 1000, 1000, 1000, 2, 0, 1, 2, 1},       // F
    {1000, 1000, 1000, 1000, 4, 1, 0, 2, 3},       // G
    {1000, 1000, 1000, 1000, 1, 2, 2, 0, 1000},    // H
    {1000, 1000, 1000, 1000, 1, 1, 3, 1000, 0}     // I
};

// Convert input to uppercase to make comparison easier
void toUpperCase(char &c) {
    c = toupper(c);  // Convert the character to uppercase
}

// Find the index for a location represented by a letter
int findLocationIndex(char location) {
    location = toupper(location);  // Ensure the input is uppercase
    for (int i = 0; i < 9; i++) {
        if (locations[i] == location) {
            return i;
        }
    }
    return -1;  // Return -1 if location not found
}

// Ask the user if they want to use the elevator or stairs (single characters)
char getTransportChoice() {
    char choice;
    cout << "Do you want to use the elevator (E), stairs (S), or none (N)? ";
    cin >> choice;
    toUpperCase(choice);  // Convert input to uppercase

    if (choice == 'E' || choice == 'S') {
        return choice;  // Return 'E' for elevator or 'S' for stairs
    }
    return 'N';  // No transport
}

// Get the distance between two locations
int getDistance(int start, int end) {
    return distances[start][end];
}

int main() {
    char start, end;

    // Ask user for the start and end locations (A, B, C, etc.)
    cout << "Where do you want to start from? (e.g., A, B, C, etc.): ";
    cin >> start;
    cout << "Where do you want to go? (e.g., A, B, C, etc.): ";
    cin >> end;

    // Find the indexes for the start and end locations
    int startIndex = findLocationIndex(start);
    int endIndex = findLocationIndex(end);

    if (startIndex == -1 || endIndex == -1) {
        cout << "Invalid location. Please try again." << endl;
        return 0;
    }

    // Ask if the user wants to use the elevator or stairs
    char transportChoice = getTransportChoice();

    // Adjust distances based on transport choice (adding elevator/stairs if selected)
    if (transportChoice == 'E') {
        cout << "Using elevator for extra convenience." << endl;
        cout << "Total distance considering elevator: "
             << getDistance(startIndex, 4) + getDistance(4, endIndex) << " meters." << endl; // Elevator index is 4
    } else if (transportChoice == 'S') {
        cout << "Using stairs for extra convenience." << endl;
        cout << "Total distance considering stairs: "
             << getDistance(startIndex, 5) + getDistance(5, endIndex) << " meters." << endl; // Stairs index is 5
    } else {
        // Otherwise, just print the direct distance
        cout << "Direct distance from " << start << " to " << end << " is "
             << getDistance(startIndex, endIndex) << " meters." << endl;
    }

    return 0;
}
