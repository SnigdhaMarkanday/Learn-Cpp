#include<iostream>
#include<vector>
int main(){
  vector<int> v={10,20,40};
  v.push_back(25);
  v.push_back(70);
  v.pop_back();
  //For iterating through all these elements
  for(int x :v){
    cout<<x;
  }
  //or can also use
  vector<int>::iterator itr=v.begin();
  for(itr= v.begin(); itr !=v.end(); i++){
    cout<<*itr;
  }
}
  
