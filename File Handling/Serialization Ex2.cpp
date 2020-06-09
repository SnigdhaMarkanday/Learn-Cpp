#include<iostream>
#include<fstream>
using namespace std;
class Item{
    public:
        string name;
        float p;
        int q;
        Item(){};
        Item(string name, float p ,int q);
        friend ifstream operator>>(ifstream Item &i);
        friend ofstream operator<<(ofstream Item &i);
        friend ostream operator<<(ostream Item &i);
};
int main(){
    
