#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream fout;
  fout.open("jai.txt", ios::out); // Create or open the file for writing

  if (!fout) {
    cerr << "Error opening file!" << endl;
    return 1;
  }

  fout << "fout is an object like cout" << endl;
  fout << "open is a member function" << endl;

  fout.close();
  cout << "Data written successfully" << endl;
  return 0;
}