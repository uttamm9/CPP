#include <bits/stdc++.h>
using namespace std;
int sum(int *a,int *b){
    return *a+ *b;
}
int sub(int *a,int *b){
    return (*a)-(*b);
}
int perform(int (*opration)(int*,int*),int *a,int *b){
    return opration(a,b);
}
int main()
{
    int a=5,b=7;
    cout<<perform(&sum,&a,&b)<<"\n";
    cout<<perform(&sub,&a,&b);
    return 0;
}