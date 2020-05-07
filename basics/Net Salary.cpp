#include<iostream>
using namespace std;
int main(){
  int NS,PA,PD,BS;
  cout<<"Enter the basic salary ,percentage allowance,percentage deduction";
  cin>>BS>>PA>>PD;
  NS=BS+(BS*PA)-(BS*PD);
  cout<<"Net Salary is:"<<NS;
  return 0;
 }
 
