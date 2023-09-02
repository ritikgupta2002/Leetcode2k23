class Solution {
public:
    int divide(int dividend, int divisor) {
        
        // int signdi=(dividend>0?1:-1);
        long long int di=(dividend);
        // int signdiv=(divisor>0?1:-1);
        long long int div=(divisor);
        long long int quotient;
        quotient=di/div;
        if(quotient>INT_MAX) return INT_MAX;
        if(quotient<INT_MIN) return INT_MIN;
        return quotient;



        
        
    
    }
};