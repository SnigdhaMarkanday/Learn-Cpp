#include <iostream>

int main() {
  int n,r=1,co=1;
  std::cin>>n;
  while(r<=n){
    int c=0;
    while(c<r){
      std::cout<<co;
      c++;
      co++;
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
