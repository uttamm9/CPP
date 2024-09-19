#include <bits/stdc++.h>
using namespace std;
string reverseis(string &s,int start,int end){
    
   
   if(start>=end){
       return "";
   }
   swap(s[start],s[end]);
    return reverseis(s,start+1,end-1);
 
}
int main()
{   
    string s;
    cin>>s;
  
    cout<<reverseis(s,0,s.length()-1);
    cout<<s;
    
    return 0;
}
