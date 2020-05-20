#include<iostream>
using namesace std;
int max(int x, int y,int z){
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
  int main(){
    cout<<"Enter the values of the no.";
    int a,b,c,m;
    cin>>a>>b>>c;
    m=max(a,b,c);
    cout<<"Maximum of these is"<<m;
    return 0;
   }
