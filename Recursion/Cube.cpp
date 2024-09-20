#include <bits/stdc++.h>
using namespace std;

int cubeis(int num,int cube){
  
  if(cube==0){
      return 1;
  }
  return num*cubeis(num,cube-1);
    
}
int main() {
    
    int num = 4;
    cout<<cubeis(num,3);
    return 0;
}
