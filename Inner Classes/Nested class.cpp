#include<iostream>
using namesapce std;
class Outer{
    public:
        int a=10;
        static int b;
        void func(){
        i.show();
        cout<<i.x;
        }
        class Inner{
          public:
              int x;
              void show(){
                  cout<<b; // inner class can access the members of outer class if they are static 
               }
         };
         Inner i;
         
