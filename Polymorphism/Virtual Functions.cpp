#include<iostream>
using namespace std;
class Base{
  public:
     virtual void func(){
          cout<<"func of Base";
       }
};
class Derived: public Base{
    public:
      void func(){
        cout<<"Func of derived";
      }
};
int main(){
    Derived d;
    d.func();
    Base *p=new Derived;
    p->func();
    return 0;
}
