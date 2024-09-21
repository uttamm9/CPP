#include <bits/stdc++.h>
using namespace std;
void concatenate(char* s1, char* s2){
    
    while(*s1){
        s1++;
    }
    
    while(*s2){
        *s1+= *s2;
        s1++;
        s2++;
    }
    return;
    
}
int main()
{
   char s1[200] = "hello";
   char s2[200] = "world";
   
   concatenate(s1,s2);
   cout<<s1;

    return 0;
}
