#include<iostream>
#include<list>
int main(){
    list<int> v={10,20,30,40};
    v.push_back(113);
    v.push_back(78);
    list<int> ::iterator itr;
    for(itr=v.begin(); itr!=v.end ;itr++){
        cout<<*itr;
     }
     return 0;
  }
    
    
