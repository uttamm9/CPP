#include<bits/stdc++.h>
using namespace std;
class Stringbuilder{
        private:
        string str;
         public:
         Stringbuilder(string str){
          this-> str = str;
         }
        Stringbuilder operator + (Stringbuilder &obj){
          return Stringbuilder(str+ " " +obj.str);
        }
        void Display(){
          cout<<str<<endl;
        }
};
int main(){
  Stringbuilder s1("Hello"), s2("Uttam"), s3("Sharma");
  Stringbuilder s4 = s1+s2+s3;
  s4.Display();
  return 0;
}