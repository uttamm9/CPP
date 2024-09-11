#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr ={20,56,78,34,12,23,33,89,2,4};
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;   
}