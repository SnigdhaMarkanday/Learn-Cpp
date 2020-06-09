#include<iostream>
#include<fstream>
using namespace std;
// Serialization is a state of storing and retriving an object
class Student{
  public:
      string name;
      int rollno.;
      string branch;
      friend ofstream &operator<<(ofstream &ofs,Student &s);
      friend ifstream &operator>>(ifstream &ifs,Student &s);
 };
 ofstream &operator<<(ofstream &ofs, Student &s){
      ofs<<s.name<<endl;
      ofs<<s.rollno<<endl;
      ofs<<s.branch<<endl;
      return ofs;
  }
 ifstream &operator>>(ifstream &ifs, Student &s){
    ifs>>s.name>>s.rollno>>s.branch;
    return ifs;
 }
 int main(){
    Student s1;
    ifstream ifs("Student.txt",ios::truc);
    ifs>>s1;
    cout<<"Name"<<s1.name;
    cout<<"Roll no"<<s1.rollno;
    cout<<"Branch"<<s1.branch;
    ifs.close();
    ofstream ofs("Student.txt",ios::trunc);
    ofs<<s1;
    ofs.close();
    return 0;
 }
