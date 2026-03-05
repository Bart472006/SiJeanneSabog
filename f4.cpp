#include<iostream>
using namespace std;
//RECURSIVE FUNCTION
long factorial (long);
int main () {
  long number;
  cout << "Enter a number: ";
  cin >> number;
  cout << number << "! = " << factorial (number) << endl;
  system("pause");
}
long factorial (long a) {
	if (a > 1)
   		return (a * factorial (a-1));
  	else
   		return 1;
}
