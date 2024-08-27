#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(static_cast<unsigned>(time(0)));
    vector<unsigned long> piles(10);
    for(int i=0;i<10;i++){
        piles[i]= rand();
    }
    
    for(int i=0;i<10;i++){
        int key = piles[i];
        int j=i;
        for(;j<10;j++){
            if(piles[j-1]<key){
                piles[j]=piles[j-1];
            }
            else{
                break;
            }
        }
        piles[j]=key;
    }
    for(auto it:piles){
        cout<<it<<" ";
    }
    cout<<"pile has the least coins :"<<piles[0];
    
    return 0;
}