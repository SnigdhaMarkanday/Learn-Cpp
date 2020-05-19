#include<iostream>
#include<string>
using namespace sd;
int main(){
  string s="Madam";
  int l=int(s.length());
  rev.resize(len);
  for(i=0,j=l-1;i<l;i++,j--){
    rev[i]=s[j];
   }
   rev[l]='\0';
   cout<<rev;
   if(rev==s){
    cout<<"Pallindrome";
   }
   else{
    cout<<"Not Pallindrome";
   }
   return 0;
 }
