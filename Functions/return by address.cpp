#include<iostream>
using namespace std;
int * func(){
  int *p=new int[5];
  for(i=0;i<5;i++){
    p[i]=5*i;
  }
  cout<<p<<endl;
  return p;
}
int main(){
  int *q=func();
  for(i=0;i<5;i++){
    cout<<q[i]<<endl;
    return 0;
  }
    
  
