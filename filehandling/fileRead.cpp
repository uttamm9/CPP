#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

  ifstream fin;
  //first file ko open kro fir read kro
  fin.open("jai.txt");

  char c;
  c = fin.get();

  while(!fin.eof()){
      cout<<c;
      c = fin.get();
  }

  fin.close();
  return 0;
}