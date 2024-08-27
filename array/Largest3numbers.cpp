#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,4,7,3,10,34,22,9,12};
    int first,second,third;
    first=second=third=INT_MIN;
    int n = arr.size();

    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second =arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }
    }
    cout<<"3 largest elements in array is :"<<first<<" "<<second<<" "<<third;
    return 0;
}