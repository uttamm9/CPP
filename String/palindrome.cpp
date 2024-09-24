#include <bits/stdc++.h>
using namespace std;
string ispalindrome(string &s1,int end,int start){
    
    while(start<=end){
        if(s1[start]==s1[end]){
            start++;
            end--;
        }
        else{
            return "not palindrome\n";
        }
    }
    return "palindrome";
    
}
int main()
{
   string s1 = "racecar";
   
    string a = ispalindrome(s1,s1.length()-1,0);
    cout<<a;
   


    return 0;
}
