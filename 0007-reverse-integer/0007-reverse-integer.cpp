class Solution {
public:
    int reverse(int x) {

        long int  rev_no=0;
        int sign=(x<0)?-1:1;
        int n=abs(x);
            int temp;
        while(n!=0){
            temp=n%10;
            rev_no=(rev_no)*10+temp;
            n/=10;
        }
        rev_no*=sign;
        if(rev_no<INT_MIN || rev_no>INT_MAX) return 0;
        else return rev_no;

    }
};