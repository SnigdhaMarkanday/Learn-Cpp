#include<iostream>
#include<string>
using namespace std;
int main(){
  int v=0,w=0,c=0;
  int i;
  string s="How Are you?";
  for(i=0;s[i]!='\0';i++){
    if(s[i]==('A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')){
      v++;
     }
     else{
     if(s[i]==' '){
      w++;
      }
      else{
        c++;
       }
      }
  }
  cout<<"vowels="<<v<<endl<<"Words="<<s+1<<endl<<"Consonants="<<c;
  return 0;
}
