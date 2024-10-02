#include<bits/stdc++.h>
using namespace std;
class Rectangle; //forword declaration
class Area{
  public:
    static int calculateArea(Rectangle &rect);

};
class Rectangle{
  private:
  int length;
  int breath;
  public:
  Rectangle(int l,int b){
  length = l;
  breath = b;
  }
  friend int Area::calculateArea(Rectangle &rect);
};
int Area::calculateArea(Rectangle &rect){
  return rect.length*rect.breath;
}

int main(){
  Rectangle rect(10,25);
  cout<<"Area fo rectangle is: "<<Area::calculateArea(rect);
  return 0;
}