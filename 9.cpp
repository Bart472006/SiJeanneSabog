Write a C++ program that will allow the user to enter a 3x3 array of elements. Your program will determine the element entered in a given row and column position in a matrix.

#include<iostream>
using namespace std;
int main() {
	int num[3][3];
	int row, col;
	//INPUT FOR ARRAY
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter a number: ";
			cin >> num[i][j];
		}
	}
	
	//OUTPUT
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "Enter row value: ";
	cin >> row;
	cout << "Enter column value: ";
	cin >> col;
	
	cout << "Value is " << num[row-1][col-1] << endl;
	system("pause");
}
