#include<iostream>
using namespace std;
template<class T>
class Stack{
    private:
         int *str;
         int top;
         int s;
   public:
       Stack(int sz){
          size=sz;
          top=-1;
          str=new int[size];
       }
       void push(int x);
       int pop();
  };
 template <class T>
 void Stack<T>::push(T x){
 }
 template <class T>
 T Stack<T> ::pop(T x){
 }
 int main(){
    Stack<int>S;
    Stack<float>S1;
    return 0;
 }
  
    
  
        
            
