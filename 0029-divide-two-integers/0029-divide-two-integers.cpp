class Solution {
public:
     int divide(int dividend, int divisor) {

        if(dividend == divisor) return 1;

        bool isPositive = (dividend<0 == divisor<0);   
         // if both are of same sign, answer is positive
        unsigned int  a = abs(dividend);
        unsigned int  b = abs(divisor);
        unsigned int  ans = 0;
        
        while(a >= b){  
            // while dividend is greater than or equal to divisor
            short q = 0;
            while(a > (b<<(q+1)))
                q++;
            ans += (1<<q);  
            // add the power of 2 found to the answer
            a = a - (b<<q);  
            // reduce the dividend by divisor * power of 2 found
        }
    
        if(ans==1<<31&&isPositive){
            return INT_MAX;
        }
        if(ans>1<<31&&isPositive==false) return INT_MIN;
        //quotient  or our ans variable  will always be in the 
        //range of 0 to 2^32-1
        //( unsigned int ) keeping in mind the ranges of 
        //dividend and divisor so  even if ispositive is negative and we 
        //get 1<<31  as quotient so we negate it . 
        //so no need to right additional condition ki hum ye soche ki ans 
        //or bhi negative ho skta hai , aisa nhi ho skta max negative value 
        // bhi -2^31 hi ho skti hai.

        return isPositive?ans:-ans;

    }
};