#include <iostream>
using namespace std;

// Define an enumeration for days of the week
enum days { sun, mon, tue, wed, thu, fri, sat };

int main() {
    days today; // Declare a variable of type 'days'

    // Loop through all days of the week
    for (int i = sun; i <= sat; i++) {
        today = static_cast<days>(i); // Cast integer to enum
        cout << "\nToday is " << today;
    }

    return 0;
}