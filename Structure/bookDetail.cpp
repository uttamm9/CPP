#include <bits/stdc++.h>
using namespace std;
struct Book{
    string name;
    string author;
    int price;
    
};
int main()
{
    
    Book books[5] = {{"geeta","uttam",3500},{"heera","goutam",50000},{"ramayan","hii",35000},{"hindi","hena",30500},{"english","uttam",3500},};
    
    string author;
    string naam;
    cin>>naam;
    
    for(int i=0;i<5;i++){
        
        if(books[i].name == naam){
            cout<<books[i].name<<" : "<<books[i].author<<" : "<<books[i].price;
            break;
        }
    }


    return 0;
}

