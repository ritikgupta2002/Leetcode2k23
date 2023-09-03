class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend==divisor) return 1;
       bool isPositive=(dividend<0==divisor<0);
       unsigned int a = abs(dividend);
       unsigned int b = abs(divisor);
       unsigned int ans=0;
       while(a>=b){
           short q=0;
           while(a>b<<(q+1)) q++;
           ans+=1<<q;
           a-=b<<q;
       }
        
       if(ans==1<<31&&isPositive) return INT_MAX;
       //this is the only edge case that we need to handle 

        //if(ans>1<<31&&isPositive==false)return INT_MIN;
        // this condition if you are thinking ,that will not come ,
        //ans cant be greater then 2^31 in any case however we can store uptill 2^32-1 tak but according to datatypes of dividend and divisor we will not be able to have value of ans greater then 2^31 so only case that we have to handle is to handle the max vala case that's it , to handle that only that's why we took unsigned it datatype because 2^31 we cannot store in int datatype . the question setter if wants to give us large value for handling he will say dividend=INT_MIN(which is -2^31) ,divisor =-1 so this is overflow this we cannot handle according to question so we return INT_MAX and that is why we took unsigned int so that atleast we can store this value and compare it .
       return isPositive?ans:-ans;
    }
};

