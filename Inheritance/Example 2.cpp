#include<iostream>
using namespace std;
class Rectangle{
private:
     int l;
     int b;
public:
     Rectangle();
     Rectangle(int l, int b){
         this->l=l;
         this->b=b;
     };
     Rectangle(Rectangle &r);
     int getl(){
          return l;
     }
     int getb(){
          return b;
     }
     void setlength(int l);
     void setbreadth(int b);
     int area();
     int perimeter();
   };
 class Cuboid :public Rectangle{
    private:
        int height;
    public:
         Cuboid (int l=0, int b=0,int h=0){
              height=h;
         }
         int getheight(){return h;}
         int setheight(int h){height=h;
         }
         int volume(){
              return (getl()*getb()*h);
         }
   };
 int main(){
       Cuboid c(4);
       c.setl(5);
       c.setb(8);
      cout<<"Volume is"<<c.volume()<<endl;
      return 0;
 }
 
       
       
        
