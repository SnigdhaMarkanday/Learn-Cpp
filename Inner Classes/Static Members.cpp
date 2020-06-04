#include<iostream>
using namespace std;
class Test{
    private:
        int a;
        int b;
    public:
        static int c; //sharable members of class
        Test(){
            a=10;
            b=20;
            c++;
        }
        static int getdata(){
            a++; // cannot access this because static member functions can only access static data members
            return c;
       }
 };
 int Test::count =0;
 int main(){
      cout<<Test::getcount();
      Test t1;
      cout<<t1.count<<endl;
      t1.count=25;
      cout<<t2.count<<endl;
      cout<<Test::count<<endl;
      return 0;
 }
 
        
