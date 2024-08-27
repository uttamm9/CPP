#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size :";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" Element of array :";
        cin>>array[i];
    }
    int maxNo=INT_MIN;//int_min mean array in sbse chhota elemrnt
    int minNo=INT_MAX;//sbse bda elements
    for(int i=0;i<n;i++){
        if(array[i]>maxNo){
            maxNo=array[i];
        }
        // maxNo=max(maxNo,array[i]);//max is inbuilt funtion
        if(array[i]<minNo){
            minNo=array[i];
        }
        // minNo=min(minNo,array[i]); //min is inbult funtion
    }
    cout<<"maximum number is :"<<maxNo<<endl;
    cout<<"mininum number is :"<<minNo;

    return 0;
}