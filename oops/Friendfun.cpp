#include<bits/stdc++.h>
using namespace std;
class Box{
  private:
  int length;
  public:
  Box(int length=5){
    this->length = length;
  }
  friend int getlength(Box);
};
int getlength(Box b){
  return b.length;
}
int main(){
  Box obj1;
  cout<<"Length of obj1 is: "<<getlength(obj1);
}