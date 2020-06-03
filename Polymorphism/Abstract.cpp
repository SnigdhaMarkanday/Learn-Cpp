#include<iostream>
using namespaces std;
class Base{
    public:
        void func1(){
            cout<<"Base func1";
        }
       virtual void func2()=0; //pure virtual func
};
class Derived: public Base{
      public:
          void func2{
              cout<<"Derived func2";
          }
};
int main(){
  Derived d;
  d.func1();
  d.func2();
  return 0;
}
    

