class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int j=0;
        int sum=0;
        int maxsum=INT_MIN;
      while(j<nums.size()){
          sum+=nums[j];
          if(sum<nums[j]){
              sum=nums[j];
          }
          maxsum=max(sum,maxsum);
          j++;
       }
      return maxsum; 
    }
};