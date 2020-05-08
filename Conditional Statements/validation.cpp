#include<iostream>
using namespace std;
int main(){
  int n1,n2,d;
  cout<<"Enter the no.s to be divide";
  cin>>n1>>n2;
  if(n2=0){
    cout<<"denominator cannot be Zero \"INVALID\"";
   }
   else{
    
     d=(n1/n2);
     cout<<d;
   }
   return 0;
}
