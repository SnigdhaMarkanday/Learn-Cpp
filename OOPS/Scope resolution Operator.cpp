#include<iostream>
using namespace std;
int m=10;
int main(){
    int m=20;
    {
        int k=m;
        int m=30;
        cout<<"We are in the inner block";
        cout<<"K= "<<k<<"\n";
        cout<<"m= "<<m<<"\n";
        cout<<"::m="<<::m<<"\n";
     }
     cout<<"We are in the outer block"<<"\n";
     cout<<"m="<<"\n";
     cout<<"::m ="<<"\n";
     return 0;
 }
