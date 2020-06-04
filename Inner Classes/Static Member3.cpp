#include<iostream>
using namespace std;
class Student{
   public:
    int rollno.;
    string name;
    static int ad ;
    Student(string n){
        name=n;
        ad++;
        rollno = ad;
     }
     void display(){
        cout<<name<<endl<<rollno.<<endl;
};
int Student::getad=0;
int main(){
  Student s1("John");
  Student s2("Ravii");
  s1.display();
  s2.display();
  cout<<"Number Admission"<<Student::getad<<endl;
  return 0;
}
  
