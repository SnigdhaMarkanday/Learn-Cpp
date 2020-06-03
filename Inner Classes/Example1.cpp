#include<iostream>
using namesapce std;
class Test{
  private:
      int a;
   protected:
       int b;
   public:
       int c;
   friend void func();
 };
 void func(){
    t.a=10;
    t.b=20;
    t.c=30;
}
