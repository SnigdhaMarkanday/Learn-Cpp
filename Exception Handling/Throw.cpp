#include<iostream>
using namespace std;
class MyException1:exception{
};
class MyException2 :public My Exception{
};
int main(){
    try{
        throw MyException1();
     } 
     catch(...){
          cout<<"Char Ellipses"<<endl;
       }
     
     catch(MyException2 e){
        cout<<"Int Catch"<<endl;
      }
      catch(MyException1 e){
          cout<<"Double Catch"<<endl;
       }
       catch(char e){
          cout<<"Char catch"<<endl;
       }
       return 0;
}
       
        
