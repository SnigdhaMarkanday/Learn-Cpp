#include<iostream>
using namespace std;
class Rectangle{
    private:
      int l;
      int b;
    public:
       int area();
      Inline int perimeter();
 };
 int Rectangle :: perimeter(){
    return 2*(l+b);
 }//inline function
 int Rectangle :: area(){
    return (l*b);
}// non inline function
int main(){
      Rectangle r(10,5);
      cout<<"Area is:"<<r.area();
      cout<<"Perimeter is "<<r.perimeter();
      return 0;
}
