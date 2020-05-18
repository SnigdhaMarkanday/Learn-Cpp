#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char s1[50]="Good";
  char s2[50]="";
  strncpy(s2,s1,3); //strcopy(destination,source,length)
  cout<<s2;
  return 0;
 }
