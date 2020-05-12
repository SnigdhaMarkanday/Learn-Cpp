#include<iostream>
using namespace std;
int main(){
  int n,i,s=0;
  cout<<"Enter the no.";
  cin>>n;
  for(i=n;i>=0;i--){
    if(n%i==0){
      s=s+i;
     }
     cout<<"Sum is"<<s;
   }
   if(n==s){
    cout<<"Perfect no.";
   }
   else{
    cout<<"Not perfect no.";
   }
  return 0;
}
