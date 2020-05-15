#include<iostream>
using namespace std;
int main(){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<5;j++){
      if((i+j>=2) && (j-i<=2)){
        cout<<"* ";
       }
       else{
        cout<<" ";
       }
      }
      cout<<endl;
   }
   return 0;
}
