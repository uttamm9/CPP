#include <bits/stdc++.h>
using namespace std;
bool fileExist(const string &filename){

  ifstream file(filename);
  return file.good();
}

int main(){

  ofstream outfile("example.txt");
  
  if(!outfile){
    cout<<"Error opening the file";
    return 1;
  }

  outfile<<"Hello my name is uttam"<<endl;
  outfile<<"This is second line in file"<<endl;
  
  outfile.close();

  cout<<"data writrn seccesfully"<<endl;

  ifstream inFile("example.txt");

  if(!inFile){
    cerr<<"Error openig file for reading"<<endl;
    return 1;
  }

  string line;
  while (getline(inFile,line))
  {
   cout<<line<<endl;
  }
  
  inFile.close();

 //append File data

  ofstream appendFileStream("example.txt",ios::app);
  
  if(!appendFileStream){
    cout<<"Error opening file for appending"<<endl;
    return 1;
  }

  appendFileStream<<"Appending new line in file"<<endl;

  appendFileStream.close();
  cout<<"Data appended seccessfully"<<endl;

  fstream file("example.txt", ios::in | ios::out | ios::app);

  if(!file){
    cerr<<"Error in file opnenig"<<endl;
    return 1;
  }

  file<<"Writing and reading in the same file."<<endl;

  file.seekp(0,ios::beg);

  while (getline(file, line))
  {
    cout << line << endl;
  }

  file.close();


  // Checking If a File Exists

  string filename = "example.txt";
  if(fileExist(filename)){
    cout<<"File exist"<<endl;
  }
  else{
    cout<<"file not exist"<<endl;
  }

  return 0;
}