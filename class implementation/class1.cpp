#include<iostrem>
using namespace std;
class person
{
  char n[20];
  int a;
  public:
      void getdata();
      void display();
};
void person::getdata()
{
    cout<<"Enter name: ";
    cin>>n;
    cout<<"Enter age: "
    cin>>a;
 }
 void person::display()
 {
    cout<<"name :"<<n;
    cout<<"age:"<<a;
 }
 int main()
 {
     person p;
     p.getdata();
     p.display();
 }
