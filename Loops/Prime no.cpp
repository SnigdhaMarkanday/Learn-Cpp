#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the no.";
  cin>>n;
  int i;
  if((n%n==0) && (n%1==0)){
    for(i=2;i<n;i++){
      if(n%i!=0){
        cout<<"Prime no";
       }
       else{
        cout<<"Not Prime";
       }
      }
      return 0;
}
     
      
  
