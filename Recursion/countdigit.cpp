#include <bits/stdc++.h>
using namespace std;
int countdigit(int num){
    if(num==0){
        return 0;
    }
    return 1+countdigit(num/10);
}
int main()
{
    int num;
    cout<<"enter number :";
    cin>>num;
    if(num==0){
        cout<<"1";
    }
    int result = countdigit(num);
    cout<<result;
    return 0;
}