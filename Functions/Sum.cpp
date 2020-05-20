#include<iostream>
using namespace std;
int add(int x,int y){
  return (x+y);
 }
 int add (int x, int y ,int z){
    return (x+y+z);
 }
 float add(float x,float y){
    return(x+y);
  }
int main(){
  int a,b,c,s;
  s=add(a=10,b=12);
  int i,j,k;
  c=add(i=86,j=90,k=85);
  float l,m,sf;
  sf=add(l=6.7f,m=7.8f);
  cout<<"sum is:"<<s;
  cout<<"sum is"<<c;
  cout<<sum is"<<sf;
  return 0;
 }
  
  
  
  
