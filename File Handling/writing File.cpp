#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream ofs ("My .txt",ios::app);
  ofs<<"Hello"<<endl;
  ofs<<25<<endl;
  ofs<<"Computer Science"<<endl;
  ofs.close();
  return 0;
}
  
