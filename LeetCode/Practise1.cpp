class Solution {
public:
    int subtractProductAndSum(int n) {
      int s=0,p=1;
      for(int i=0;n!=0;i++){
        int r;
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
       }
    int res = p-s;
    return res;
   }  
};
