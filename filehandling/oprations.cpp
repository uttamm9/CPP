#include <bits/stdc++.h>
using namespace std;
int main() {

  ofstream fout("zero.txt",ios::app);
  if(!fout){
    cout << "error in file opening" << endl;
    return 1;
  }

 
  vector<int> vec;
  ifstream fin("zero.txt");
  if(!fin){
    cout << "error in file opening" << endl;
    return 1;
  }

  string word;
  while(fin >> word){
    try {
      int num = stoi(word);
      vec.push_back(num);
    } catch (invalid_argument const &e) {
      // Skip non-integer words
    }
  }

  for(int num : vec) {
    cout << num << " ";
  }

  fin.close();
  sort(vec.begin(), vec.end());

  fout<<"Sorted array"<<endl;
  for(int i=0;i<5;i++){
    fout<<vec[i]<<" ";
  }
  
  fout.close();
  return 0;
}