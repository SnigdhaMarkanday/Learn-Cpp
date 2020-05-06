#include<iostream>
using namespace std;
int main(){
  float v;
  int r,h;
  cout<<"Enter the radius and height of cylinder";
  cin>>r>>h;
  v=(22/7)*r*r*h;
  cout<<"The volume of cylinder is:"<<v;
  return 0;
}
