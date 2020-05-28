#include<iostream>
using namespace std;
class Parent{
    private:
      int a;
    protected:
      int b;
    public:
      int c;
      void funParent(){
        a=10;
        b=20;
        c=30;
       }
};
class Child: public Parent{
  public:
    void funChild(){
        //a=80;
        b=78;
        c=100;
    }
};
class Grandchild:public Child{
    public:
       void funGrandchild(){
       }
};
int main(){
    Child c;
    c.a=10;
    c.b=30;
    c.c=5;
    return 0;
 }
          
       
