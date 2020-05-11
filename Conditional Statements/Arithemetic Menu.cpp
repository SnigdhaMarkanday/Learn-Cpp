#include<iostream>
using namespace std;
int main(){
  int c;
  int a,b;
  cout<<"Enter the operation u want to perform"<<endl<<"1. Add"<<"2. Difference"<<endl<<"3. Product"<<endl<<"4. Division ";
  cin>>c;
  switch(c){
    case 1:{
      int s;
      cout<<"Enter the no.";
      cin>>a>>b;
      s=a+b;
      cout<<"Sum is:"<<s;
      }
      break;
      case 2:{
        int d;
        cout<<"Enter no.";
        cin>>a>>b;
        if(a>b){
          d=a-b;
          cout<<"Difference is:"<<d;
        }
        else{
          d=b-a;
          cout<<"Difference is:<<d;
        }
      }
      case 3:{
       int p;
       cout<<"Enter no.s";
       cin>a>>b;
       p=(a*b);
       cout<<"Product is:"<<p;
       }
       case 4:{
          int d;
          cout<<"Enter the no.";
          cin>>a>>b;
          d=(a/b);
          cout<<"Quotient is"<<d;
         }
      }
      return 0;
  }
  
          
          
        
        
      
      
      
