
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr ={2,4,7,-1,88,56,34};
    int n=arr.size();
    for(int i=0;i<n;i++){
       for(int j=0;j<n-1;j++){
           if(arr[j]>arr[j+1]){
               int temp=arr[j];//swap elements
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}