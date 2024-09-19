#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string input,int start,int end){
    
    if(start>=end){
        return true;
    }
    
    if(input[start]!=input[end]){
        return false;
    }
    
    return ispalindrome(input,start+1,end-1);
    
}

int main() {
    string input = "medem";
    int n = input.length()-1;
    if(ispalindrome(input,0,n)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
