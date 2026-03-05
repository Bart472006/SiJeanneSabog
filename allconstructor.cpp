#include <iostream>
using namespace std;

class Car {
private:
    string brand;

public:
    // Default constructor
    Car() {
        brand = "Unknown";  // Set default value
        cout << "Default constructor called! Brand set to 'Unknown'" << endl;
    }

    // Parameterized constructor
    Car(string b) {
        brand = b;  // Initialize brand with provided value
        cout << "Parameterized constructor called! Brand set to: " << brand << endl;
    }

    // Copy constructor
    Car(const Car &c) {
        brand = c.brand;  // Copy brand from another object
        cout << "Copy constructor called! Brand copied from another Car: " << brand << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called! Cleaning up resources for Car: " << brand << endl;
    }

    // Member function to display brand
    void show() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    // Creating an object with the default constructor
    Car car1;  // Calls default constructor
    car1.show();

    // Creating an object with the parameterized constructor
    Car car2("Toyota");  // Calls parameterized constructor
    car2.show();

    // Creating a copy of car2 using the copy constructor
    Car car3 = car2;  // Calls copy constructor
    car3.show();

    // Destructor will be automatically called when objects go out of scope
    return 0;
}
