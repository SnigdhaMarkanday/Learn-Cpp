#include<iostream>
using namespace std;
int g=0;//global variable
void func(){
  int a=5;// local variable
  g=g+a;
  cout<<g<<endl;
}
int main(){
  g=15;
  func();
  g++;
  cout<<g<<endl;
  return 0;
}
  
