#include<iostream>
using namespace std;
void func(int n){
  if(n>0){
    cout<<n;
    func(n-1);
  }
  int main(){
    cout<<"Enter the value of n;
    int n;
    cin>>n;
    func(n);
    return 0;
  }
