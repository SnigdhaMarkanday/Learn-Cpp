#include<iostream>
using namespace std;
namespace First{
    void func(){
      cout<<"First";
   }
}
namespace Second{
    void func(){
        cout<<"Second";
     }
}
int main(){
    First::func();
    Second::func();
    return 0;
}
