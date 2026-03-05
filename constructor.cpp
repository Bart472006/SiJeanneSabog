#include <iostream>
using namespace std;

class Person {
public:
    string name;

    // Constructor
    Person(string n) {
        name = n;
        cout << "Constructor: " << name << " created" << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor: " << name << " destroyed" << endl;
    }
};

int main() {
    Person p1("Alice");
    Person p2("Bob");

    cout << "Inside main..." << endl;

    // When main ends, destructors for p1 and p2 will be called
    return 0;
}
