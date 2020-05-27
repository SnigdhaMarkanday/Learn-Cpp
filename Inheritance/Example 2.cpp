#include<iostream>
using namespace std;
class Rectangle{
private:
     int l;
     int b;
public:
  
 };
 class Cuboid :public Rectangle{
    private:
        int h;
 };
 int main(){
       Rectangle r;
       r.l=67;
       r.b=44;
       r.area();
       Cuboid c;
       c.l=5;
       c.b=8;
       c.h=4;
       c.area();
       
        
