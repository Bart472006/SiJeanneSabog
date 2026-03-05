// Raiden Munoz - 1CPE - 2B
#include <iostream>
#include <iomanip>
using namespace std;

double rp(double wcost, double mpercent)
{
    return wcost + (wcost * mpercent / 100);
}

int main()
{
    double wcost, mpercent, rpf;
    cout << "Please enter the item's wholesale cost: ";
    cin >> wcost;
    cout << "Enter the item's markup percentage: ";
    cin >> mpercent;
    rpf = rp(wcost, mpercent);
    cout << fixed << setprecision(2);
    cout << "The item's retail price is: $" << rpf << endl;
    return 0;
}