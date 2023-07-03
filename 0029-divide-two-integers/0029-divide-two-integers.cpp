class Solution {
public:
     int divide(int dividend, int divisor) {

        if(dividend == divisor) return 1;

        bool isPositive = (dividend<0 == divisor<0);   
         // if both are of same sign, answer is positive
        long long  a = abs(dividend);
        long long  b = abs(divisor);
        long long ans = 0;
        
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
        if(!isPositive){
            ans=-ans;
        }

        // if(ans<INT_MIN) return INT_MIN;
        if(ans>INT_MAX) return INT_MAX; 

        return (int)ans;

    }
};