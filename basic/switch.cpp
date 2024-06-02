#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"enter your age :";
    cin>>age;
    switch (age)
    {
    case 12:
        cout<<"you are chiled";
        break;
    case 18:
        cout<<"you are in teenage";
        break;
    default:
        cout<<"you are living chil life";
        break;
    }
    return 0;
}