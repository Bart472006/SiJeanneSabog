#include <iostream>
using namespace std;

// Define an enumeration for months
enum months { jan, feb, mar, apr, may };

int main() {
    months m1, m2; // Declare two variables of type 'months'
    m1 = jan;      // Assign 'jan' to m1
    m2 = apr;      // Assign 'apr' to m2

    // Calculate the difference between the two months
    int diff = m2 - m1;
    cout << "Months between: " << diff << "\n";

    // Check if m1 comes after m2
    if (m1 > m2)
        cout << "m2 comes before m1\n";

    return 0;
}