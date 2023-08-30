class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int bitindex=31;
        int res=0;
        while(bitindex!=-1){
        if(n&1){
            res=res|(1<<bitindex);
            bitindex--;
        }
        else{
            bitindex--;
        }
        n=n>>1;
        }
        return res;
    }
};