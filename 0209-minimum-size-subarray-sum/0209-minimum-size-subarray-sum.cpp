class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minimalWindow=INT_MAX;
        int end=0;
        int start=0;
        int sum=0;
       for(int end=0;end<nums.size();end++){
            sum+=nums[end];
            while(sum>=target) 
            {
                minimalWindow=min(minimalWindow,end-start+1);
                sum=sum-nums[start];
                start++;
            }
        }
        return minimalWindow==INT_MAX?0:minimalWindow;

    }
};