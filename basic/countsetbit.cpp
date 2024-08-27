#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to get how much bit is set :";
    cin>>num;
    int count=0;
    while(num){
        num &=(num-1); //num=(num-1)&num;
        count++;
    }
    cout<<"Total set bit is :"<<count;
    
    return 0;
}

