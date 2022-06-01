#include <iostream>
int main() {
  int n,r=1;
  std::cin>>n;
  while(r<=n){
    int c=0;
    while(c<r){
      std::cout<<r;
      c++;
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
