#include <bits/stdc++.h>
using namespace std;
int findFirstOccurrence(string &s1,char ch){
    
    for(int i=0; i < s1.length();i++){
        if(s1[i] == ch){
            return i;
        }
    }
    
    return -1;
    
}
int main()
{
   string s1 = "OpenAI";
   char ch = 'A';
   
    int a = findFirstOccurrence(s1,ch);
   
   if(a!= -1){
       cout<<"first occurrence at: "<<a<<endl;
   }
   else{
       cout<<"not found first occurrence";
   }

    return 0;
}
