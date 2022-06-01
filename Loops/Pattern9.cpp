#include <iostream>

int main() {
  int n,r=1;
  std::cin>>n;
  while(r<=n){
    char ch='A'+r-1;
    int c=1;
    while(c<=n){
      
      std::cout<<ch;
      
      c++;
     
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
