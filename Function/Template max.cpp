#include<iostream>
using namespace std;
template<class t>
t max(t x,t y)
{
  if(x>y){
    return x;
  }
  else{
    return y;
  }
}
int main(){
int c= max(10,5);
float d=max(11.5f,6.7f);
  return 0;
 }
