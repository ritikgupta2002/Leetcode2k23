class Solution {
public:
    int mySqrt(int x) {
        int lo=1;
        int hi=x;
        long ans;
        while(lo<=hi){
            long  mid=(lo)+(hi-lo)/2;
            if(mid*mid<=x){
                ans=mid;
                lo=mid+1;
            }
            else if(mid*mid>x) hi=mid-1;
        }
        return (int)ans;
    }
};