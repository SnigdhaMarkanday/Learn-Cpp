#include<iostream>
using namespace std;
class Rational{
  private:
      int p;
      int q;
  public:
      Rational(){
          p=1;
          q=1;
      }
      Rational(int p,int q){
        this->p=p;
        this->q=q;
      }
      Rational(Rational &r){
          this->p=r.p;
          this->q=r.q;
       }
       int getp(int p){
        return p;
       }
       int getq(int q){
        return q;
       }
       void setq(int q){
        this->q=q;
       }
       void setp(int p){
          this->p=p;
        }
        Rational operator+(Rational r){
          Rational t;
          t.p=r.p;
          t.q=r.q;
          
       int main(){
  return 0;
}
