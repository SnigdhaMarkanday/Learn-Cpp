#include<iostream>
using namesapce std;
class Shapes{
    public:
        virtual void name()=0;
 };
 class Rectangle: public Shapes{
    public:
      void name(){
          cout<<"This is a rectangle";
       }
};
class Circle: public Shapes{
    public:
        void name(){
            cout<<"This is a circle";
         }
};
int main(){
    Circle *c=new Rectangle;
    c->name();
    c=new Circle;
    c->name();
    return 0;
}
    
        
