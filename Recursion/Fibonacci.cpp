
#include <bits/stdc++.h>
using namespace std;
int fib(int num){
    if(num==1||num==0){
        return num;
    }
    return fib(num-1)+fib(num-2);
}
int main()
{   
    int num;
    cin>>num;
    
    cout<<fib(num);
    return 0;
}