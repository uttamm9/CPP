// find all elements in an array of integers 
// that have at least two significant elements.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,4,7,-3,10,-34,22,9,2};
  
    int n = arr.size();
   for(int i=0;i<n;i++){
       int cont=0;
       for(int j=0;j<n;j++){
           if(arr[i]<arr[j])
            cont++;
       }
       if(cont>=2){
           cout<<arr[i]<<" ";
       }
   }
    return 0;
}