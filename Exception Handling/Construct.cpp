#include<iostream>
using namespace std;
int main(){
  int a=10,b=0,c;
  try{
     if(b==0){
        throw 1;
        c=a/b;
        cout<<c;
     }
   catch(int e){
    cout<<"Division by zero";
   }
  cout<<"Bye";
  return 0;
}
    
