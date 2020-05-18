#include<iostream>
#include<string>
using namespace std;
int main(){
  string str="Hello";
  cout<<str.length()<<endl;
  cout<<str.capacity()<<endl;
  str.resize(50);
  str.clear();
  cout<<str.length()<<endl;
  return 0;
 }
