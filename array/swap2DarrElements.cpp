
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>swapelments(vector<vector<int>>&arr,int row1,int clo1,int row2,int clo2){
    vector<int>&a1=arr[row1];//row1 is 1
    vector<int>&a2=arr[row2];//row2 is 3
    //a1={4,5,6};
    //a2={10,11,12};
    int &temp1=a1[clo1];
    int &temp2=a2[clo1];
    int temp3=temp1;
    temp1=temp2;
    temp2=temp3;
    return arr;
    
}
int main()
{
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //swap 5 & 11;
    vector<vector<int>>ans = swapelments(arr,1,1,3,1);
    //hare first 1 is row(1) ,second 1 is row(1)'s col(1),
    //hare third 3 is row(3) ,forth 1 is row(3)'s col(1),

    for(auto v1:ans){
        for(auto v2:v1){
            cout<<v2<<" ";
        }
        cout<<"\n";
    }
    return 0;
}