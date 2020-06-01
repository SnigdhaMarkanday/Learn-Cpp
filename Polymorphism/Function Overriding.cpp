#include<iostream>
using namespace std;
class Parent{
    public:
        void display(){
            cout<<"Dispaly of parent";
         }
};
class Child: public Parent{
    public:
      void dispaly(){
          cout<<"Dispaly of Child";
       }
};
int main(){
    Parent p;
    p.display();
    Child c;
    c.display();
    return 0;
}
