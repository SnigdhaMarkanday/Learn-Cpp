#include<iostream>
using namespace std;
class Complex{
    private:
       int real;
       int img;
    public:
       friend void operator<<(ostream &o,Complex &c1){
            cout<<real<<"+i"<<img;
        }
  };
   void operator<<(ostream &o,Complex &c1){
            cout<<real<<"+i"<<img;
   }
  int main(){
      Complex c1(3,7);
      int x=10;
      c1.display();
      
      
        
