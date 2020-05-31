#Include<iostream>
using namespace std;
class Base{
    public:
        void func1();
        void func2();
        void func3();
};
class Derived :public Base{
    public:
        void func4();
        void func5();
};
int main(){
    Base *p;
    p=new Derived;
    p->func1();
    p->func2();
    p->func3();
    return 0;
}
    
        
