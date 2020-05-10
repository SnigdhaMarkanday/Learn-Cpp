#include<iostream>
using namespace std;
int main(){
  int e,m,h,t,p;
  cout<<"Enter marks";
  cin>>e>>m>>h;
  t=e+m+h;
  p=(t/3)*100;
  if(p>=60){
    cout<<"A Grade";
   }
   else{
    if((p>=35)&&(p<60)){
      cout<<"B Grade";
     }
     else{
      cout<<"C Grade";
     }
    }
    return 0;
}

  
  
  
