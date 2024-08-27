#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
        return true;
    
}
int main(){
    int n;
    cout<<"Enter any number for check prime number :";
    cin>>n;
    if(isprime(n)){
        cout<<"given number is prime number";
    }
    else{
        cout<<"given number is not prime number";
    }
    return 0;
}