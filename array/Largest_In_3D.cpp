#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<vector<int>>>arr={
        {{11,2,3},
         {2,4,7},
         {8,6,9}
        },
        {{8,9,3},
         {7,33,6},
         {3,888,5}
        },
        {{8,7,5},
         {9,1,4},
         {3,7,12}
        }
    };
    for(auto vec2:arr) {
        for(auto vec1:vec2){
            cout<<"{";
            for(auto it:vec1){
                cout<<it<<" ";
            }
            cout<<"}";
            cout<<"\n";
        }
        cout<<"\n";
    }
    int n=arr.size();
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++){

        vector<vector<int>>a=arr[i];
        int m=a.size();
        for(int j=0;j<m;j++){
            vector<int>b=a[j];
            int p=b.size();
            for(int k=0;k<p;k++){
                if(b[k]>maxNo){
                    maxNo=b[k];
                }
                if(b[k]<minNo){
                    minNo=b[k];
                }
            }
        }
        
    }
    cout<<"Largest element in 3D array is :"<<maxNo<<"\n";
    cout<<"Smallest element in 3D arary is :"<<minNo;
    return 0;
}