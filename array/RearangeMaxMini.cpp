#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange_max_min(vector<int>&arr,int &n){
        vector<int> temp(n);
        int maxi = n-1;
        int mini = 0;
        int result = true;
        for(int i =0;i<n;i++){

                if(result){
                    temp[i]=arr[maxi];
                    maxi--;
                }
                else{
                    temp[i]=arr[mini];
                    mini++;
                }
                result = !result;
        }
        for(int i=0;i<n;i++){
                arr[i]=temp[i];
        }
    return arr;
}
int main(){
         vector<int>arr = {1,2,3,4,5,6,7};
         int n=arr.size();
        //  vector<int>ans =
        rearrange_max_min(arr,n);
   
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}