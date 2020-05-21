#include<iostream>
using namespace std;
void swap(int &x,int &y){
  int t;
  t=x;
  x=y;
  y=t;
 }
 int main(){
    int a,b;
    cout<<"Enter 2 no.s";
    cin>>a>>b;
    swap(a,b);
    cout<<"Values are "<<a<<b;
    return 0;
 }
