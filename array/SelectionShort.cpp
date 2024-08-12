//time comlexity => o(n^2) or n(n-1)
//space comlexity => o(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={12,45,33,11,66};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]); //swap 2 elements in array
    }
    for(auto i:arr) //for array output 
        cout<<i<<" ";
    return 0;
}