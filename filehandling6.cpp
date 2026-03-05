#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    ifstream fin("example.txt"); //replace with your file
    char character; 
    int count = 0;
    while (fin >> character) 
        count++;
    cout << "The file has " << count << " characters\n";
    return 0;
}   
