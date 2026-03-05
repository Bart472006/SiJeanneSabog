#include <iostream> // Use <iostream> instead of <iostream.h> for modern C++
using namespace std;

// Define an enumeration for math errors
enum mathError { noerror, badoperator, dividebyzero };

int main() {
    double x, y, z; // Variables for input numbers and result
    char op;        // Variable for the operator
    mathError error = noerror; // Initialize error to noerror

    // Prompt the user for input
    cout << "Enter a number, an operator (+, -, *, /), and another number: ";
    cin >> x >> op >> y;

    // Perform the operation based on the operator
    switch (op) {
        case '+': // Addition
            z = x + y;
            break;
        case '-': // Subtraction
            z = x - y;
            break;
        case '*': // Multiplication
            z = x * y;
            break;
        case '/': // Division
            if (y != 0) // Check for division by zero
                z = x / y;
            else
                error = dividebyzero; // Set error if dividing by zero
            break;
        default:
            error = badoperator; // Set error for invalid operator
            break;
    }

    // Check for errors and display the result or error message
    if (error == noerror) {
        cout << x << " " << op << " " << y << " = " << z << endl;
    } else {
        switch (error) {
            case badoperator:
                cout << "ERROR: Invalid operator" << endl;
                break;
            case dividebyzero:
                cout << "ERROR: Attempt to divide by zero" << endl;
                break;
            default:
                cout << "Unknown error" << endl;
                break;
        }
    }

    return 0;
}