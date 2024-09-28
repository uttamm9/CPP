#include<bits/stdc++.h>
using namespace std;
class Integer
{
    private:
     int value;
    public:
        Integer(int v=0):value(v){};
        Integer operator +(Integer &obj)
        {
            Integer temp;
            temp.value = value + obj.value;
            return temp;
        }
        void display()
        {
            cout<<value<<"\n";
        }
};

int main()
{
    Integer n1(10),n2(20);
    Integer n3 = n1 + n2;
    n3.display();
   
}
