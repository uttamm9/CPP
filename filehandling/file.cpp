#include <bits/stdc++.h>
using namespace std;

// Function to check if a file exists
bool fileExist(const string &filename) {
  ifstream file(filename);
  return file.good();
}

int main() {
  // Create and open a file for writing
  ofstream outfile("example.txt");
  if (!outfile) {
    cout << "Error opening the file";
    return 1;
  }

  // Write data to the file
  outfile << "Hello my name is uttam" << endl;
  outfile << "This is second line in file" << endl;
  outfile.close();
  cout << "Data written successfully" << endl;

  // Open the file for reading
  ifstream inFile("example.txt");
  if (!inFile) {
    cerr << "Error opening file for reading" << endl;
    return 1;
  }

  // Read and display the file content
  string line;
  while (getline(inFile, line)) {
    cout << line << endl;
  }
  inFile.close();

  // Append data to the file
  ofstream appendFileStream("example.txt", ios::app);
  if (!appendFileStream) {
    cout << "Error opening file for appending" << endl;
    return 1;
  }
  appendFileStream << "Appending new line in file" << endl;
  appendFileStream.close();
  cout << "Data appended successfully" << endl;

  // Open the file for both reading and writing
  fstream file("example.txt", ios::in | ios::out | ios::app);
  if (!file) {
    cerr << "Error opening file" << endl;
    return 1;
  }

  // Write and read in the same file
  file << "Writing and reading in the same file." << endl;
  file.seekp(0, ios::beg);
  while (getline(file, line)) {
    cout << line << endl;
  }
  file.close();

  // Check if the file exists
  string filename = "example.txt";
  if (fileExist(filename)) {
    cout << "File exists" << endl;
  } else {
    cout << "File does not exist" << endl;
  }

  return 0;
}
