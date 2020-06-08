#include<iostream>
#define pi 3.1425 // it replaces when the prgm start compiling (symbolic const)
#define sqr(x) (x*x)
#define max(x,y) (x>y ? x : y)
using namespace std;
int main(){
  cout<<pi;
  cout<<sqr(5);
  cout<<max(10,12);
  return 0;
}
