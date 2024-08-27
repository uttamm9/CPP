// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> ary={-1,-4,-7,-3,-8,-9,-10,-7,-13,-11,-12};
//     int n=ary.size();
//     cout<<"size of array is "<<n<<"\n";
//     int maxNO=INT_MIN;//sabse chot a element;
//     for(int i=0;i<n;i++){
//         if(ary[i]>maxNO){
//             maxNO=ary[i];
//         }
//     }
//     cout<<maxNO;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ary={-1,4,-7,-3,-8,-9,10,-7,-13,-11,-12};
    int n=ary.size();
    int minNO=INT_MIN;//sabse chot a element;
    int second=0;
    for(int i=0;i<n;i++){
        if(ary[i]<minNO){
            second=minNO;
            minNO=ary[i];
        }
        else if(ary[i]<second){
            second=ary[i];
        }
    }
    cout<<second<<" ";
    return 0;
}
