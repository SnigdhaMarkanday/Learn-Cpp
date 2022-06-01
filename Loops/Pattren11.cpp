#include <iostream>

int main() {
  int n,r=1;
  char ch='A';
  std::cin>>n;
  while(r<=n){
     
     int c=1;
    while(c<=n){
      std::cout<<ch;
      ch++;
      c++;
    }
   
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
