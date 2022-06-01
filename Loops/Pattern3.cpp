#include <iostream>

int main() {
  int n,r=0;
  std::cin>>n;
  while(r<n){
    int c=n;
    while(c>0){
      std::cout<<c;
      c--;
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
