#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter the bill amt";
  cin>>a;
  if(a<100){
    cout<<"No Discount";
   }
   else{
    if(a>=100 && a<500){
      cout<<"Discount is 10 percent";
    }
    else{
        if(a>=500){
          cout<<"Discount is 20 percent";
        }
    }
   }
}
}

