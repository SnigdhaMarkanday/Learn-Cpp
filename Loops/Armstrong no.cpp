#include<iostream>
using namespace std;
int main(){
  int n,s=0,r,i,d,z;
  cout<<"Enter the no. of digits";
  cin>>d;
  cout<<"Enter the no.";
  cin>>n;
  z=n;
  for(i=0;i<=d;i++){
    r=n%10;
    s=s+(r*r*r);
    n=n/10;
   }
   if(z==s){
    cout<<"Armstrong no.";
    }
    else{
      cout<<"Not Armstrong no.";
     }
    return 0;
 }
    
    
    
