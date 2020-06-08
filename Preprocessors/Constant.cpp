#include<iostream>
using namespace std;
class Demo{
}
int main(){
  //Usage 1 of const qualifier
  const int x=10;
  x++; // this won't increment as it is qualified const
  //Usage 2 of const qualifier
  const int x=10;
  const int *p= &x;
  ++*p;
  cout<<*p<<" "<<x; //const pointer cannot be incremented 
  
  return 0;
 }
 
