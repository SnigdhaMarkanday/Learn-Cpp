#include<iostream>
using namespace std;
int main(){
  int r,n,s=0,d,i,z;
  cout<<"Enter the no. of digits";
  cin>>d;
  cout<<"Enter no.";
  cin>>n;
  z=n;
  for(i=0;i<=d;i++){
    r=n%10;
    s=r+(s*10);
    n=n/10;
    }
    if(z==s){
    cout<<"Pallindrome no.";
    }
    else{
      cout<<"Not Pallindrome";
     }
     return 0;
}
    
  
