#include<iostream>
using namespace std;
class Rectangle{
  int l;
  int b;
  public:
    int area(){
      return (l*b);
    }
    int perimeter(){
      return 2*(l+b);
    }
};
void main(){
  Rectangle r1,r2;
  r1.area(13,12);
  r1.perimeter(13,28);
  r2.area(12,13);
  r2.perimeter(78,32);
}
  
