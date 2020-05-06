#include<iostream>
#include<cmath>
using namespaces std;
int main(){
  int a,b,c,x1,x2;
  cout<<"enter the values of a,b,c";
  cin>>a>>b>>c;
  cout<<"Quadratic eq is"<<endl;
  cout<<a<<"x^2"<<"+"<<b<<"x"<<"-"<<c<<"=0";
  x1=(-b+sqrt((b*b)-(4*a*c)))/2;
  x2=(-b-sqrt((b*b)-(4*a*c)))/2;
  cout<<"Roots are"<<x1<<"and"<<x2;
  return 0;
 }
 
  
