#include<iostream>
using namesoace std;
int main(){
  int d,n,i,s=0,r;
  cout<<"Enter a no. of digits";
  cin>>d;
  cout<<"Enter the no.";
  cin>>n;
  for(i=0;i<=d;i++){
    r=n%10;
    s=(s*10)+r;
    n=(n/10);
  }
  cout<<"Reverse of no. is"<<r;
}

    
    
  
