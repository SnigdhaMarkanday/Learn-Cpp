#include<iostream>
using namespace std;
class Rectangle{
    public:
        void area(){
          cout<<"area of rectang";
        }
};
class Cuboid :public Rectangle{
      public:
          void volume(){
          cout<<"Cuboid Volume";
          }
 };
int main(){
    Rectangle r;
    Cuboid *q=&r;
    p->area();
   // p->volume();
    
  return 0;
}
