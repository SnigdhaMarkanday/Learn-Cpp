#include <iostream>

int main() {
  int n,r=0;
  //char ch='A';
  std::cin>>n;
  while(r<=n){
     int c=1;
    while(c<=n){
      char re = 'A'+r+c-1;
      std::cout<<re;
      c++;
    }
   
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
