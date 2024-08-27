#include <bits/stdc++.h>
using namespace std;
int
main ()
{
    set < int >st =  {2, 4, 6, 8, 10}; 
    
    for(auto it:st){
        if(it==6){
            st.erase(it);
        }
    }
    for(auto it:st){
        cout<<it<<" ";
    }
  return 0;

}
