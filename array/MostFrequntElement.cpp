#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={3,5,6,7,5,3,8,9,6,2,5};
    int n=arr.size();
    int max_count=0;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>max_count){
                max_count=count;
            }
        }
    }
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
       if(max_count==count){
            cout<<arr[i];
            break;
        }
    }
     
    
    return 0;
}