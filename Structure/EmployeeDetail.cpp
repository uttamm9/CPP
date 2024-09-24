#include <bits/stdc++.h>
using namespace std;
struct Employee{
    int Employee_id;
    string name;
    int salary;
    
};
int main()
{
    
    Employee employees[5] = {{123,"uttam",3500},{124,"goutam",50000},{125,"hii",35000},{164,"hena",30500},{127,"shubham",3500},};
    
    int maxi = INT_MIN;
    string naam = "";
    for(int i=0;i<5;i++){
        
        if(employees[i].salary > maxi){
            maxi = employees[i].salary;
            naam = employees[i].name;
        }
    }
    cout<<naam<<" : "<<maxi;

    return 0;
}
