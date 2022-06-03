class Solution {
public:
    int hammingWeight(uint32_t n) {
        int co=0;
        while(n!=0){
            
            //check last bit 
            if(n&1){
               co++; 
            }
            n=n>>1;
        }
        return co;
    }
};
