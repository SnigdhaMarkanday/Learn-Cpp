#include<iostream>
using namespace std;
int main(){
  int i;
  char A[60];
  cout<<Enter the string";
  for(i=0;i!=,\0,;i++){
    cin>>A[i];
   }
   for(i=0;i!='\0';i++){
    if(A[i]>=65 || A[i]<=90){
      A[i]=A[i]+32;
     }
     else{
        A[i]=A[i]-32;
     }
   }
   for(i=0;i!=0;i++){
    cout<<A[i];
   }
   return 0;
 }
      
