#include <iostream>

int main() {
  int n,r=0,co=1;
  std::cin>>n;
  while(r<n){
    int c=1;
    while(c<=n){
      std::cout<<co;
      c++;
      co++;
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
