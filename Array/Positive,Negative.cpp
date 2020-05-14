#include<iostream>
using namespace std;
int main(){
int A[]={-2,9,-5,4,8,-10,-9};
int pcount=0, ncount=0;
for(int x:A){
  if(x>0){
    pcount++;
  }
  else{
    ncount++;
  }
 }
 cout<<"No. of Positive no."<<pcount;
 cout<<"No. of Negative no.s"<<ncount;
 return 0;
}
 
