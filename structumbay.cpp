#include <iostream>
#include <string> // For using strings
using namespace std;

// Define a structure for today's date
struct today {
    int month;
    int date;
    int year;
};

// Define a structure for biodata
struct biodata {
    char name[20];
    today date_of_birth;
    char address[30];
};

// Define a structure for name
struct name {
    char fn[15]; // First name
    char mn[15]; // Middle name
    char ln[15]; // Last name
};

// Define a structure for address
struct address {
    int hn;         // House number
    char st[15];    // Street
    char city[15];  // City
};

// Define a structure for passenger information
struct passinfo {
    name myname;       // Name structure
    address myaddress; // Address structure
    char gender[15];   // Gender
};

// Define a structure for flight date
struct flightdate {
    int month;
    int day;
    int year;
};

// Define a structure for flight information
struct flightInfo {
    int fno;          // Flight number
    int ftime;        // Flight time
    int sno;          // Seat number
    flightdate mydate; // Flight date structure
};

// Define a structure for passenger flight information
struct pfi {
    passinfo PIN;     // Passenger information
    flightInfo FI;    // Flight information
};

int main() {
    biodata b;

    // Input biodata
    cout << "Enter name: ";
    cin.ignore(); // Clear the input buffer
    cin.getline(b.name, 20);

    cout << "Enter birth month: ";
    cin >> b.date_of_birth.month;

    cout << "Enter birth date: ";
    cin >> b.date_of_birth.date;

    cout << "Enter birth year: ";
    cin >> b.date_of_birth.year;

    cout << "Enter address: ";
    cin.ignore(); // Clear the input buffer
    cin.getline(b.address, 30);

    // Output biodata
    cout << "\nName: " << b.name;
    cout << "\nMonth: " << b.date_of_birth.month;
    cout << "\nDate: " << b.date_of_birth.date;
    cout << "\nYear: " << b.date_of_birth.year;
    cout << "\nAddress: " << b.address << "\n";

    // Example usage of the flight information structure
    pfi myflight;

    // Input passenger information
    cout << "\nEnter first name: ";
    cin >> myflight.PIN.myname.fn;

    cout << "Enter middle name: ";
    cin >> myflight.PIN.myname.mn;

    cout << "Enter last name: ";
    cin >> myflight.PIN.myname.ln;

    cout << "Enter house number: ";
    cin >> myflight.PIN.myaddress.hn;

    cout << "Enter street: ";
    cin >> myflight.PIN.myaddress.st;

    cout << "Enter city: ";
    cin >> myflight.PIN.myaddress.city;

    cout << "Enter gender: ";
    cin >> myflight.PIN.gender;

    // Input flight information
    cout << "Enter flight number: ";
    cin >> myflight.FI.fno;

    cout << "Enter flight time: ";
    cin >> myflight.FI.ftime;

    cout << "Enter seat number: ";
    cin >> myflight.FI.sno;

    cout << "Enter flight month: ";
    cin >> myflight.FI.mydate.month;

    cout << "Enter flight day: ";
    cin >> myflight.FI.mydate.day;

    cout << "Enter flight year: ";
    cin >> myflight.FI.mydate.year;

    // Output passenger flight information
    cout << "\nPassenger Information:";
    cout << "\nName: " << myflight.PIN.myname.fn << " " << myflight.PIN.myname.mn << " " << myflight.PIN.myname.ln;
    cout << "\nAddress: " << myflight.PIN.myaddress.hn << ", " << myflight.PIN.myaddress.st << ", " << myflight.PIN.myaddress.city;
    cout << "\nGender: " << myflight.PIN.gender;

    cout << "\n\nFlight Information:";
    cout << "\nFlight Number: " << myflight.FI.fno;
    cout << "\nFlight Time: " << myflight.FI.ftime;
    cout << "\nSeat Number: " << myflight.FI.sno;
    cout << "\nFlight Date: " << myflight.FI.mydate.month << "/" << myflight.FI.mydate.day << "/" << myflight.FI.mydate.year;

    return 0;
}