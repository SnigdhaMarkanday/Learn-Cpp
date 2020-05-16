#include<iostream>
using namespace std;
int main(){
  int A[5]={2,3,4,5,6};
  int *p=A;
  cout<<*p<<endl;
  p++;
  cout<<*p<<endl;
  p--;
  cout<<*p<<endl;
  return 0;
  }
  
