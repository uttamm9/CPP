#include <bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int roll;
    float marks[5];
    float average = 0.0;
    
    float averagemarks(){
        for(int i=0;i<5;i++){
            average+=marks[i];
        }
        return average/5.0;
    }
    
};
int main()
{
    Student obj;
    cin>>obj.name;
    cin>>obj.roll;
    for(int i=0;i<5;i++){
        cin>>obj.marks[i];
    }
    
    cout<<"average of marks is: "<<obj.averagemarks();
    

    return 0;
}
