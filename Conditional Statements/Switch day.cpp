#include<iostream>
using namespace std;
int main(){
  int d;
  cout<<"Enter the day no.";
  cin>>d;
  switch(d){
    case 1:
        cout<<"Monday";
        break;
   case 2 :
        cout<<"Tuesday";
        break;
  case 3:
        cout<<"Wednusday";
        break;
  case 4:
        cout<<"Thursday";
        break;
 case 5:
        cout<<"Friday";
        break;
 case 6:
      cout<<"Saturday";
      break;
 case 7:
      cout<<"Sunday";
      break;
 default:
     cout<<"Wrong Input";
  }
  return 0;
}
