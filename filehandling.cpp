#include <iostream>
#include <fstream>
using namespace std;

int main ()
 {
  ofstream myfile;
  //Have a textfile named example together with the program.
  myfile.open ("example.txt");
  myfile << "Writing this TEST TEST to a file.\n";
  myfile.close();
  system("pause");
}
