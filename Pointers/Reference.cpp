#include<iostream>
using namespace std;
int main(){
  int x=10;
  int &y;
  cout<<x<<endl;
  y++;
  x++;
  cout<<x<<endl;
  cout<<&x<<" "<<&y;
  return 0;
}
 
