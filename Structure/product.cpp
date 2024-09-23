#include <bits/stdc++.h>
using namespace std;
struct Product{
    string name;
    int price;
    int quantity;
    
};
int main()
{
    
    Product products[10] = {{"a",10,100},{"b",20,200},{"c",30,300},{"d",40,400},{"e",50,500},{"a",10,100},{"a",10,100},{"a",10,100},{"a",10,100},{"a",10,100}};
    
    int total_price=0;
    
    for(int i=0;i<10;i++){
        total_price+= products[i].price*products[i].quantity;
    }
    cout<<total_price;

    return 0;
}
