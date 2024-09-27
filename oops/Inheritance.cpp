#include <bits/stdc++.h>
using namespace std;
class Product{
  private:
  int  ProductId;
  int price;
  
  public:
  Product(int ProductId,int price){
    this->ProductId = ProductId;
    this->price = price;
  }
  int getprice(){
      return price;
  }
};
class Electronics: public Product{
  
  public:
  Electronics(int ProductId,int price):Product(ProductId,price){}
 
 
  int getprice(){
      return Product::getprice();
  }
};
int main()
{
    Electronics Laptop(123,35000);
    cout<<Laptop.getprice();

    return 0;
}