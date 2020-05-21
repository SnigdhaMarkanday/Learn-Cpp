#include<iostream>
using namespace std;
void swap(int *x,int *y){
  int z;
  z=x;
  x=y;
  y=z;
 }
int main(){
  int a,b;
  cout<<"Enter the values";
  cin>>a>>b;
  swap(&a,&b);
  cout<<"values after swaping"<<a<<b;
  return 0;
}
