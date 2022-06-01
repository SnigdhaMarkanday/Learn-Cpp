#include <iostream>

int main() {
  int n,r=1;
  std::cin>>n;
  while(r>0){
    int c=r;
    while(c>0){
      
      std::cout<<c;
      
      c--;
     
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
