#include<iostream>
using namespace std;
class Base{
  public:
      Base(){
        cout<<"Default of base"<<endl;
      }
      Base(int x){
        cut<<"Param of base"<<x<<endl;
       }
  };
  class Derived :public Base{
        public:
            Derived(){
              cout<<"Default cons";
             }
             Derived(int y){
                cout<<"Parameterized cons"<<y;
               }
               Derived (int x, int y):Base(x){
                cout<<"param of derived"<<a
                
  };
  int main(){
    Derived d(10,20);
    return 0;
  }
    
  
   
       
        
