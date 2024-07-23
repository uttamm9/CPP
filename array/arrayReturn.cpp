#include<bits/stdc++.h>
using namespace std;
vector<int> even(int num){
    vector<int>nums;  //creat new array for new values
    for(int i=1;i<=num;i++){
        if(i%2==0)
            nums.push_back(i);  //new array me value push krme ke liye
    }
    return nums;
}
int main(){
    int num;
    num=20;
    vector<int> nums = even(num); //second methord array inisilation
    for(auto i:nums) //for array output 
        cout<<i<<" ";
    return 0;
}
