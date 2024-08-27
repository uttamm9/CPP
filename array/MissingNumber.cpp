// Write a C++ program to find the smallest element missing from a sorted array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,2,3,5,7,8,10};
    int n=arr.size();
    
   for(int i=0;i<n;i++){
           if(arr[i+1]-arr[i]!=1){
               cout<<(arr[i]+1);
               break;
       }
   }
    return 0;
}