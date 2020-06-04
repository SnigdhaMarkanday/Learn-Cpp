#include<iostream>
using namespace std;
class Innova{
    public:
        static int p;
        Innova(){
         }
         static int getprice(){
          return p;
         }
};
int Innova::p=3000000;
int main(){
    cout<<Innova::getprice;
    Innova my;
    cout<<my.getprice;
    return 0;
 }
    
        
