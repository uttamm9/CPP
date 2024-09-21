#include <bits/stdc++.h>
using namespace std;
void reverseis(string &s1,int end,int start){
    
    while(start<end){
    swap(s1[end],s1[start]);
      end--;
      start++;
    }
}
int main()
{
   string s1 = "Microsoft";
  reverseis(s1,s1.length()-1,0);
   cout<<s1;

    return 0;
}
