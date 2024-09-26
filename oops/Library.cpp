#include<bits/stdc++.h>
using namespace std;
class Library
{
private:
  int bookId;
  int countogBook;
  string Tital;
public:
  Library(){
    bookId = -1;
    countogBook = 0;
    Tital = "";
  };
   Library(string Tital,int bookId,int countogBook){
    (*this).Tital = Tital;
    this->bookId = bookId;
    this->countogBook = countogBook;
   }

   void printdetails(){
    cout<<"Book Tital: "<<Tital<<"\n";
    cout<<"Book Id: "<<bookId<<"\n";
    cout<<"total book: "<<countogBook<<" \n";
   }

   void borrow(){
    if(countogBook > 0){
      cout<<"Book borrow succesfully\n";
      countogBook--;
   }
   else{
    cout<<"Book not available\n";
   }
   }

   void returnbook(){
    countogBook++;
    cout<<"Book return succesfully";
   }
};



int main(){

  Library *obj  = new Library("Geeta",123,5);
  obj->printdetails();
  obj->borrow();
  obj->returnbook();
  return  0;
}