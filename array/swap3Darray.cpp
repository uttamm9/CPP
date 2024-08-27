//swap {2,4,7} to {9,7,4}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<vector<vector<int>>>arr={
        {{1,2,3},
         {2,4,7},
         {8,6,9}
        },
        {{8,9,3},
         {7,3,6},
         {3,8,5}
        },
        {{8,7,5},
         {9,7,4},
         {3,7,1}
        }
    };
    for(auto vec2:arr){
       
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
    cout<<"array after swap :\n";
    vector<vector<int>>&first=arr[0];
    vector<vector<int>>&second=arr[2];
    vector<int>&third=first[1];
    vector<int>&forth=second[1];
    
    vector<int>temp=third;
    third=forth;
    forth=temp;
   //swap(arr[0][1],arr[2][1]);
    for(auto vec2:arr){
       
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
    
    return 0;
}