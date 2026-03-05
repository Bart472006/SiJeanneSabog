#include<iostream>
using namespace std;
double divide (int a = 10, double b = 2) {
	return a/b;
}
int main () {
	cout << divide() << endl;
	cout << divide(14) << endl;
	cout << divide(10,3) << endl;
	system("pause");
} 
