#include<iostream>
using namespace std;
class temp
{
  int f,c;
  public:
    void getdata();
    void convert();
    void display();
};
void temp::getdata()
{
  cout<<"Enter the temp in f";
  cin>>f;
}
void temp::convert(int f)
{
  c=(5/9*f)-32;
}
void temp::display(int c)
{
  cout<<"Temp in celsius is:"<<c;
}
int main()
{
  temp t;
  t.getdata();
  t.convert(f);
  t.display(c);
 }
  
