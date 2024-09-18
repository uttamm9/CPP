#include <bits/stdc++.h>
using namespace std;
int reverse(int num, int sum){
    if(num==0)
        return sum;
    int rem=num%10;
    return reverse(num/10,sum*10+rem);
}
int main(){
    int num=0;
    cout<<"enter number for reverse :";
    cin>>num;
    int result =reverse(num,0);
    cout<<result;
    return 0;
}