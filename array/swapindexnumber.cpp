//swap index value [2] to [5]
#include <bits/stdc++.h>
using namespace std;
vector<int>swaparray(vector<int>&arr,int pos1,int pos2){
    int temp=arr[pos1];
   arr[pos1]=arr[pos2];
   arr[pos2]=temp;
   return arr;
}
int main()
{
    vector<int>arr={1,4,3,5,6,7,8};
    vector<int>ans=swaparray(arr,2,5);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}