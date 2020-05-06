#include<iostream>
using namespace std;
int main(){
  int d1,d2,d;
  cout<<"Enter the distance of point A and B from origin:";
  cin>>d1>>d2;
  if(d1>d2){
    d=(d1-d2);
    cout<<"Distance between A and B is "<<d;
   }
   else{
   d=d2-d1;
   cout<<"Distance between A and B is "<<d;
   }
   return 0;
}
  
  
