#include <bits/stdc++.h>
using namespace std;
int main() {

  ofstream fout("zero.txt",ios::app);
  if(!fout){
    cout << "error in file opening" << endl;
    return 1;
  }

  // Assuming the vector is already defined and populated
  vector<int> vec;
  ifstream fin("zero.txt");
  if(!fin){
    cout << "error in file opening" << endl;
    return 1;
  }

  int num;
  while(fin >> num) {
    vec.push_back(num);
  }

  fin.close();
  sort(vec.begin(), vec.end());

  for(int num : vec) {
    fout << num << " ";
  }

  fout.close();
  return 0;
}