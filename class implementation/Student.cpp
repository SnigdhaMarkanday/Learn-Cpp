#include<iostream>
using namespace std;
class Student{
  public:
    int r;
    int m,m1,m2,m3;
    int marks();
    int grade();
    void setdata();
    void getdata();
};
void Student:: getdata()
{
  cout<<"Enter the rollno.";
  cin>>r;
  cout<<"Enter the marks in eng , maths ,hindi";
  cin>>m1>>m2>>m3;
}
void Student :: setdata(){
    return r;
    return m1;
    return m2;
    rreturn m3;
 }
 int Student :: marks(int m1 ,int m2, int m3){
    int t=(m1+m2+m3);
    int a=t/3;
    int m=a*100;
 }
 int Student :: grade(int p){
      m=p;
      if(m>=85){
        cout<<"Grade A";
       }
       else{
        if(m>=75){
          cout<<"Grade B";
        }
        else {
          if(m>=65){
            cout<<"Grade C";
           }
           else{
              if(m>=55){
                cout<<"Grade D";
              }
              else{
                cout<<"Failed";
               }
           }
         }
       }
     }
   }
}
 int main(){
    Student S;
    S.getdata();
    S.setdata();
    S.marks();
    S.grade();
    return 0;
}
