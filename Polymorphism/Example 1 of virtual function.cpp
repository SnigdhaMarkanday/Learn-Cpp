#include<iostreeam>
using namespace std;
class BasicCar{
    public:
        virtual void start(){
            cout<<"func of Basic";
         }
};
class AdvCar: public BasicCar{
    public:
      void star(){
          cout<<"func of Adv";
       }
};
int main(){
    BasicCar *p=new AdvCar();
    p->start();
    return 0;
 }
       
