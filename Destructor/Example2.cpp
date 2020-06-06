#include<iostream>
using namespace std;
class Base{
  public:
      Base(){
          cout<<"Base constructor";
      }
      virtual ~Base(){
          cout<<"Base Destructor";
       }// derived class destructor will be called in this case
};
class Derived : public Base{
    public:
      Derived(){
          cout<<"Derived constructor";
       }
       ~Derived (){
          cout<<"Derived constructor";
        }
};
int main(){
    Derived d;
    delete p;
    return 0;
 }
