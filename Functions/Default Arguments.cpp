#include<iostream>
using namespace std;
int add(int x=0, int y=0,int z=0){
  return(x+y+z);
 }// if(no value is assigned then by default it will be zero
  
int main(){
  int c=add(10,11);
  int s=add(2,5,6);
  return 0;
 }
