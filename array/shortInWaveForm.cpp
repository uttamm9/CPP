//Write a C++ program to sort a given unsorted array of integers, in wave form.
// Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={4,1,5,9,12,9,22,45,-7,8};
    int n=arr.size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
            }
    }
    for(int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}