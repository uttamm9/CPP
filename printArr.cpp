#include <bits/stdc++.h>
using namespace std;
int reveseis(vector<int>&arr,int n){
    if(n<0){
        return 0;
    }
    cout<<arr[n]<<" ";
    return reveseis(arr,n-1);
    
}
int main()
{
    vector<int>arr = {1,2,3,4,5,6,8,6};
    int n = arr.size()-1;
    cout<<reveseis(arr,n); //print array in reverse with recursion
  
    return 0;
}
