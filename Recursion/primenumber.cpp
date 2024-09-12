
#include <bits/stdc++.h>
using namespace std;
bool isprime(int n,int i=2){
    if(n<=2){
        return (n==2) ? true : false;
    }
    if(n%i==0){
        return false;
    }
    if(i*i>n){
        return true;
    }
    return isprime(n,i+1);
    
}
int main()
{   
    int num;
    cin>>num;
    
    if(isprime(num)){
        cout<<"This is prime number";
    }
    else{
        cout<<"not prime number";
    }
    return 0;
}