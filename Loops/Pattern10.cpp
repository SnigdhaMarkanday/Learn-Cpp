#include <iostream>

int main() {
  int n,r=1;
  std::cin>>n;
  while(r<=n){
     int c=1;
    
   
    while(c<=n){
      char ch='A'+c-1;
      std::cout<<ch;
      
      c++;
     
    }
    r++;
    std::cout<<std::endl;
  }
  return 0;
}
