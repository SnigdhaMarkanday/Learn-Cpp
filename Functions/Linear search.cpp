#include<iostream>
using namespace std;
int search(int A[],int n,int k){
  for(i=0;i<n;i++){
    if(k==A[i]){
      cout<<"Element found";
      return i;
     }
     return 0;
    
   }

  
int main(){
  int k;
  cout<<"Enter the value";
  cin>>k;
  int A[5]={2,3,5,7,8};
  int i=search(A,5,k);
  cout<<"Element found at"<<i;
  return 0;
}
  
  
  
  
