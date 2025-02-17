#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> arr(5);
  cout<<"Enter array value"<<endl;
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
  ofstream fout("zero.txt");
  if(!fout){
    cout<<"Enable to open file"<<endl;
  }

  fout<<"Original Data"<<endl;
  for(int i=0;i<5;i++){
    fout<< arr[i]<<" ";
  }

  fout.close();

  

  return 0;
}