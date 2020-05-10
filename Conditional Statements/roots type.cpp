#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cout<<"Enter values of a,b,c";
  cin>>a>>b>>c;
  cout<<a<<"x^2"<<"-"<<b<<"x"<<"+"<<c;
  d=(b*b)-(4*a*c);
  if(d>0){
    cout<<"Roots are real and unequal";
   }
   else{
    if(d=0){
      cout<<"Real and Equal";
     }
     else{
      cout<<"Imaginary";
     }
   }
   return 0;
}
