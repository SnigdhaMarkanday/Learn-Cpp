#include<iostream>
using namespace std;
class Rectangle{
  private:
    int l;
    int b;
  public:
    Rectangle (){
        l=1;
        b=1;
     }//default constructors
     Rectangle(int l,int b){
       setdata(l,b);
       getdata(l,b);
      }//NON parameterised
      Rectangle(Rectangle &r){
          l=r.i;
          b=r.b;
       }//copy constructors
      int setdata(int a;int c){
          l=a;
          b=c;
      }
      int getdata(int a,int b){
        return l;
        return b;
      }
      int area()
	   {
		   return length*breadth;
	   }
     int perimeter(){
        return 2*(l+b);
     }
};
int main()
{
	Rectangle r1(10,5);
  Rectangle r2(r1);
	cout<<r1.area()<<endl;
  cout<<r2.area()<<endl;
}
      
