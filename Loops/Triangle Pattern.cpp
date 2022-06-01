#include <iostream>

int main() {
  int n,r=0;
  std::cin>>n;
  while(r<n){
    int c=0;
    while(c<=r){
      std::cout<<"*";
      c++;
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
