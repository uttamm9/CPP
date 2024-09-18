#include <bits/stdc++.h>
using namespace std;
int sumis(int num){
    
    if(num==0){
        return 0;
    }
    
    return (num%10) + sumis(num/10);
}
int main()
{   
    int num;
    cin>>num;
    cout<<sumis(num);
    
    return 0;
}
