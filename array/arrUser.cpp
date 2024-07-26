#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size :";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){ // for creat array  from user input;
        cout<<"Enter "<<i+1<<" Element of array :";
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";//output array
    }
    return 0;
}