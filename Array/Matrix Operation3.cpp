#include<iostream>
using namespace std;
int main(){
  int A[3][3], B[3][3],C[3][3],i,j,k;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    cout<<"Enter no. for first matrix";
    cin>>A[i][j];
    }
   }
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    cout<<"Enter no. for second matrix";
    cin>>B[i][j];
    }
   }
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    int s=0;
    for(k=0;k<3;k++){
    s=s+(A[i][k]*B[k][j]);
    C[i][j]=s;
    }
   }
   }
   for(i=0;i<3;i++){
   for(j=0;j<3;j++){
    cout<<C[i][j];
    }
    cout<<endl;
   }
   return 0;
 }
