#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ifstream ifs("My.txt");
  string name;
  int rollno.;
  string branch;
  ifs>>name>>rollno>>branch;
  cout<<"Name"<<name<<endl;
  cout<<"Roll no."<<rollno<<endl;
  cout<<"Branch"<<branch<<endl;
  return 0;
}
  
  
  
