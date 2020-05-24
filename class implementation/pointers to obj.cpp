#include<iostream>
using namespace std;
class rectangle{
  public:
    int l;
    int b;
    int area(){
      return (l*b);
     }
    int perimeter(){
      return 2*(l+b);
     }
};
int main(){
    rectangle r1;
    rectangle *p=new rectangle;
    p->l=10;
    p->b=18;
    cout<<"Area is"<<p->area();
    cout<<"Perimeter is"<<p->perimeter();
    return 0;
 }
    
    
