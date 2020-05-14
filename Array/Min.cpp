#include<iostream>
using namespace std;
int main(){
  int A[]={10,20,30,40,50,60,70,80}
  int m=A[0];
  for(int x:A){
  if(x<m){
    m=x;
   }
  }
  cout<<"min is"<<m;
  return 0;
}
