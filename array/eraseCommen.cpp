#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec1 = {10, 20, 30, 40, 50};
    vector<int> vec2 = {40,50,10,23,70,45};
    
    vector<int> commen_ele;
    
    for(int i=0;i<vec1.size();i++){
        
        for(int j=0;j<vec2.size();j++){
            if(vec1[i]==vec2[j]){
                commen_ele.push_back(vec1[i]);
                vec1.erase(vec1.begin() + i);
                vec2.erase(vec1.begin() + j);
            }
        }
    }
    
    for(auto it:vec1){
        cout<<it<<" ";
    }
    cout<<"\n";
   for(auto it:vec2){
        cout<<it<<" ";
    }

    return 0;
}
