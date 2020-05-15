#include<iostream>
using namespace std;
int main(){
  int i,j;
  int A[2][3]={{2,3,4},{7,3,6}};
  int B[2][3]={{3,4,5},{7,10,11}};
  int C[2][3];
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      C[i][j]=A[i][j]+B[i][j];
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      cout<<C[2][3];
     }
  }
  return 0;
}
