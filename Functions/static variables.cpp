#include<iostream>
using namespace std;
void func(){
  static int s=0;
  s++;
  cout<<s<<endl;
}
int main(){
  func();
  func();
  func();
  return 0;
}
