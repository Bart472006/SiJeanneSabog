#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream
using namespace std;

int main () {
  char str[256];

  cout << "Enter the name of an existing text file: ";
  cin.get (str,256);    // get c-string

  ifstream is(str);     // open file

  char c;
  while (is.get(c))          // loop getting single characters
    cout << c;
    
  is.close();                // close file
}
