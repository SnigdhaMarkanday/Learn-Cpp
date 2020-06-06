#include<iostream>
using namespace std;
class Test{
  public:
      Test(){
         cout<<"Test Created";
       }
       ~Test(){
          cout<<"Test destroyed";
        }
 };
 int main(){
  Test *p=new Test();
  delete p;
  return 0;
}
