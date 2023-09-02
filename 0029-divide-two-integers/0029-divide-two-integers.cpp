class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1 ;
        unsigned int d1=abs(dividend);
        unsigned int d2=abs(divisor);
        bool isPositive=(dividend<0==divisor<0);
        short q;
        unsigned int ans;
        while(d1>=d2){
            q=0;
            while(d1>(d2<<q+1)){
                q++;
            }
            ans+=1<<q;
            d1=d1-(d2<<q);
        }
        if(ans==1<<31&&isPositive) return INT_MAX;
        if(ans>1<<31&&isPositive==false) return INT_MIN;
        return isPositive?ans:-ans;
    }
};