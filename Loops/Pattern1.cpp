#include <iostream>

int main() {
  int n,r=0;
  std::cin>>n;
  while(r<n){
    int c=0;
    r=r+1;
    while(c<n){
      
      std::cout<<r;
      c++;
    }
    std::cout<<std::endl;
  }
  return 0;
}
