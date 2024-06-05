//Find perfect number between given range 
#include <bits/stdc++.h>
using namespace std;
bool isperfect(int num){
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0)
            sum=sum+i;
    }
    if(sum==num)
        return true;
    else
        return false;
}
void perfectnumber(int num1,int num2){
    cout<<"Perfect number between "<<num1<<" and "<<num2<<" is :";
     for(int i=num1;i<=num2;i++){
        if(isperfect(i))
            cout<<i<<", ";
    }
}
int main()
{
    int number1,number2;
    cout<<"Enter starting number :";
    cin>>number1;
    cout<<"Enter ending number :";
    cin>>number2;
    perfectnumber(number1,number2);
    return 0;
}
