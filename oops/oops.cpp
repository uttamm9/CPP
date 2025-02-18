#include <bits/stdc++.h>
using namespace std;
class Product{
  private:
  int productId;
  int productPrice;

  public:
  Product(int productId,int price){
    this->productId = productId;
    this->productPrice = price;
  }
  int getprice(){
    return productPrice;
  }

};

int main(){

  Product obj(55,43000);
  cout<<obj.getprice();

  return 0;
}
