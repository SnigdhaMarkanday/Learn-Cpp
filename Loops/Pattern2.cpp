#include <iostream>
int main() {
  int n,r=0;
  std::cin>>n;
  while(r<n){
    int c=1;
    while(c<=n){
      std::cout<<c;
      c++;
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
