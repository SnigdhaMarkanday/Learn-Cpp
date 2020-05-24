#include<iostream>
using namespace std;
class rectangle{
    private:
      int l;
      int b;
    public:
      void setdata(int l,int b){
        if(l>0){
        length=l;
       }
       else{
        length=0;
       }
       if(b>0){
        breadth=b;
       }
       else{
        breadth=0;
       }
      }
      void getdata(){
        return l;
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
    rectangle r1;
    r1.length(9);
    r1.breadth(5);
    cout<<"Area is"<<r1.area();
    cout<<"perimeter is"<<r1.perimeter();
    return 0;
  }
    
     
       
