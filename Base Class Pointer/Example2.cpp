#include<iostream>
using namesapce std;
class BasicCar{
    public:
        void start(){
            cout<<"CAR started";
         }
};
class AdvCar:public BasicCar{
    public:
        void Playmusic(){
          cout<<"Music is on";
         }
 };
 int main(){
  AdvCar a;
  a.start();
  a.playmusic();
  BasicCar *p=&a;
  p->start();
  
  
