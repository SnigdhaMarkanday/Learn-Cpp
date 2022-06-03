#include<iostream>
using namespace std;
int main(){
    //Fibonacci Series
    int n=10;
    int a=0,b=1,num;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<=n;i++){
        num=a+b;
        a=b;
        b=num;
        cout<<num<<endl;
        
    }
    return 0;
}
