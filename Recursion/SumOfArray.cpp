#include <bits/stdc++.h>
using namespace std;

int sumis(vector<int> arr,int n,int sum){
  
  if(n<0){
      return sum;
  }

  return sum + arr[n] + sumis(arr,n-1,sum);
    
}
int main() {
    
    vector<int> arr = {1,3,2,4,1,5} ;
    
    cout<<sumis(arr,arr.size()-1,0);
    
    return 0;
}
