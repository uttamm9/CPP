
#include <bits/stdc++.h>
using namespace std;
typedef int (*opration)(int&,int&);
int sum(int &a,int &b){
    return a+b;
}
int main()
{
   
   int a=5,b=6;
   opration cal;
   cal = &sum;
   cout<<cal(a,b);
    return 0;
}