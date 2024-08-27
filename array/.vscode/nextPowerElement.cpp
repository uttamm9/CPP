
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={4,1,5,9,12,9,22,45,-7};
    int n=arr.size();
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]<arr[j]){
                
                cout<<arr[i]<<" :"<<arr[j]<<"\n";
                break;
            }
        }
    }
    return 0;
}