#include<iostream>
using namespace std;
int main(){
  int i,m,l,h,A[10],k;
  A[6]={3,4,5,7,9,14};
  cout<<"Enter the key";
  cin>>k;
  l=0;
  h=5;
  while(l<=h){
    m=(l+h)/2;
    if(k==A[m]){
      cout<<"Found at "<<m;
      return 0;
    }
    else{
      if(k<A[m]){
        h=m-1;
      }
      else{
        l=m+1;
      }
    }
    cout<<"Not Found";
  }
  return 0;
}
    
    
    
    
    
    
  
