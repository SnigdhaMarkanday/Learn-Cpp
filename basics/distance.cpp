#include<iostream>
using namespace std;
int main(){
  int v,u,a,s;
  cout<<"Enter the initial speed ,final speed,acceleration";
  cin>>u>>v>>a;
  s=(v*v-u*u)/2*a;
  cout<<"The Distance covered is :"<<s;
  return 0;
}
