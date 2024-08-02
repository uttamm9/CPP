#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x= 10;
    cout<<x<<endl;
    cout<<&x<<endl;

    int* p = &x;
    cout<<p<<endl;

    int** q= &p;
    cout<<q<<endl;

}
