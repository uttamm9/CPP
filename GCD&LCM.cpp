#include <bits/stdc++.h>
using namespace std;
int gcdis(int num1,int num2){
    
    if(num2 == 0){
        return num1;
    }
    
    return gcdis(num2,num1%num2);
    
}
int main()
{  
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    
    cout<<"GCD is: "<<gcdis(num1,num2);
    cout<<"\nLCM is: "<<( num1*num2)/gcdis(num1,num2);
    return 0;
}
