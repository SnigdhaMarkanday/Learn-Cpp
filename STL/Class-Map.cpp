#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m.put (pair<int,string>(11 , "John"));
    m.put pair<int,string>(19,"Snigii"));
    m.insert (pair <int , string>(12,"Ravi");
    map<int ,string> ::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    map<int ,string> ::iterator itr;
    itr1=m.find(11);
    cout<<"Value Found";
    cout<<itr->first<<" "<<itr->second<<endl;
    return 0;
}
