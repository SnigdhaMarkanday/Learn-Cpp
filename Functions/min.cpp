#include<iostream>
using namespace std;
int min(int x, int y){
  if(x>y){
    return x;
  }
  else{
    return y;
   }
 }
 int min(int x,int y,int y){
  if(x>y && x>z){
    return x;
  }
  else{
    if(y>x && y>z){
      return y;
     }
     else{
      return z;
     }
    }
   }
  float min(float x,float y){
    if(x>y){
      return x;
    }
    else{
      return y;
     }
    }
      
int main(){
  int a,b,m,c;
  m=min(a=11,b=24);
  m=min(a=12,b=14,c=56);
  flaot mi,d,e;
  mi=min(e=2.3f,d=4.5f);
  cout<<"min no"<<m;
  cout<<"min no. is"<<mi;
  return 0;
 }
  
