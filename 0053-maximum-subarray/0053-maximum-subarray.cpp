class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int maxsum=INT_MIN;
      while(j<nums.size()){
          sum+=nums[j];
          maxsum=max(maxsum,sum);
          while(sum<0){
              sum-=nums[i++];
          }
          j++;
       }
      return maxsum; 
    }
};