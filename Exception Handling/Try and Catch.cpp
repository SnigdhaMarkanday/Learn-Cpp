#include<iostream>
using namespace std;
int division(int a,int b){
  if(b==0){
    throw 1;
  }
  else{
  return a/b;
 }
}
int main(){
    int x=10,y=20,z;
    try{
       if(y==0){
         throw 1;
       }
       else{
          z=division(x,y);
          cout<<z<<endl;
        }
    }
    catch(int e){
        cout<<"Division by Zero";
    }
    cout<<"Bye";
    return 0;
}
    
      
      
          
