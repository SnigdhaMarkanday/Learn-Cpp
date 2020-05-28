#include<iostream>
using namespace std;
class Rectangle{
  private:
    int l;
    int b;
    void setl(int len){
    if(len>0){
      l=len;
     }
     else{
      l=0;
     }
    }
     void setb(int br){
     if(br>0){
        b=br;
     }
     else{
      b=0;
     }
   }
     void getl(){
      return l;
     }
     void getb(){
      return b;
     }
     int area(){
      return (l*b);
     }
     int perimeter(){
      return 2*(l+b);
     }
 };
 int main(){
 Rectangle r1;
 r1.setl(10);
 r1.setb(9);
 cout<<r1.area();
  return 0;
}
