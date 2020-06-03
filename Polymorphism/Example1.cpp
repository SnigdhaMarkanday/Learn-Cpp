#include<iostream>
using namespace std;
class Car{
    public:
        virtual void start(){
            cout<<"Car Started";
         }
         virtual void stop(){
            cout<<"Car stopped";
         }
};
class Innova: public Car{
    public:
        void start(){
            cout<<"Innova Started";
        }
        void stop(){
            cout<<"Innova stopped";
         }
};
class Swift :public Car{
   public:
      void start(){
          cout<<"Swift Started";
      }
      void Stop{
          cout<<"Swift Stopped";
      }
};
int main(){
    Car *c=new Innova;
    c->start();
    c=new Swift;
    c1->start();
    return 0;
}


