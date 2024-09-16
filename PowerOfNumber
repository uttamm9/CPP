#include <bits/stdc++.h>
using namespace std;
int poweris(int base,int power){
   if(power){
       return base*poweris(base,power-1);
   }
  return 1;  
}
int main()
{   
    int base,power;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter power: ";
    cin>>power;
 
    cout<<poweris(base,power);
    return 0;
}
