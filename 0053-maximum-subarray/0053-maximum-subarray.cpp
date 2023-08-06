class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=INT_MIN;
        int start;
        int ansstart;
        int ansend;
        for(int i=0 ;i<nums.size();i++){
            if(sum==0) start=i;
            sum+=nums[i];
            if(sum>max){
                max=sum;
                ansstart=start;
                ansend=i;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};