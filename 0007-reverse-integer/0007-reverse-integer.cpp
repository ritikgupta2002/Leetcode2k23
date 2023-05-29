class Solution {
public:
    int reverse(int x) {

        int rev_no=0;
        int sign=(x<0)?-1:1;
        int n=abs(x);
            int temp;
        while(n!=0){
            temp=n%10;
            if(rev_no<INT_MIN/10||rev_no>INT_MAX/10) return 0;
            rev_no=(rev_no)*10+temp;//rev_no * 10 is the real cause of overflow 
            n/=10;
        }
        rev_no*=sign;
        return rev_no;

    }
};
//time complexity :- O(log base 10(x))
