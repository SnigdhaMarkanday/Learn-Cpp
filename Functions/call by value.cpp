#include<iostream>
using namespace std;
void swap(int x, int y){
  int c;
  c=x;
  x=y;
  y=c;
}
int main(){
  int a,b;
  cout<<"Enter the values ";
  cin>>a>>b;
  swap(a,b);
  cout<<"Values are"<<a<<b;// no change in values of a and b bcoz it is call by value function
  return 0;
}
