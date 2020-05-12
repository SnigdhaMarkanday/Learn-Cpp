#include<iostream>
using namespace std;
int main(){
  int n,m;
  cout<<"Enter the no.s";
  cin>>n>>n;
  while(m!=n){
    if(m>n){
      m=m-n;
    }
    elseif(n>m){
      n=n-m;
    }
   }
   cout<<"GCD is"<<m;
  return 0;
 }
  
