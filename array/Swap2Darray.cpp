#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>swap2Darray(vector<vector<int>>&arr,int pos1,int pos2){
    vector<int> temp =arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=temp;
    return arr;
}
int main(){
    vector<vector<int>>arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    cout<<"current vector is :";
    for(auto intarr:arr){
        for(auto it:intarr){
            cout<<it<<",";
        }
        cout<<" ";
    }
    cout<<"\n";
    vector<vector<int>>ans=swap2Darray(arr,2,4);
    cout<<"after swap 2 posi & 4th posi :";
    for(auto intarr:arr){
        for(auto it:intarr){
            cout<<it<<",";
        }
        cout<<" ";
    }
}