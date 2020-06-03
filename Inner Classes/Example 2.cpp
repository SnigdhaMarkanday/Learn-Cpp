#include<iostream>
using namespace std;
class Yours;
class My{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    friend Yours;
};
class Yours{
    My m;
    public:
        void func(){
        m.a=10;
        m.b=20;
        m.c=30;
        
            
    
