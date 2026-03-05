#include<iostream>
using namespace std;

int sum ();	// FUNCTION DECLARATION
int diff ();
void print();

int main () {
	int total, result;
	result = diff();
	total = sum();
	cout << "The difference of num1 to num2 =" <<result << endl;
	cout << "The sum of num3 and num4 =" <<total << endl;
	print();
	system("pause"); }

int diff () {
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	return num1 - num2;
}

int sum () {	// FUNCTION DEFINITION
	int num3, num4;
	cout << "Enter two numbers: ";
	cin >> num3 >> num4;
	return num3 + num4;
}

void print () {
	cout << "[A] Sum" << endl;
	cout << "[B] Difference" << endl;
	cout << "[C] Product" << endl;
	cout << "[D] Quit" << endl;
}
