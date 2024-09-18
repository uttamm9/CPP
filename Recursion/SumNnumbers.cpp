#include <bits/stdc++.h>
using namespace std;
int sumis(int num){
   if(num){
       return num+sumis(num-1);
   }
  return 0;  
}
int main()
{   
    int num;
    cin>>num;;
 
    cout<<sumis(num);
    return 0;
}
