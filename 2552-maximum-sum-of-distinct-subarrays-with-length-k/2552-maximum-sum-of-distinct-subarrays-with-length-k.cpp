class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0 ;
        int j=0 ;
        long long  sum=0;
        long long  maxi=INT_MIN;
        unordered_map<int,int> s ;
        while(j<nums.size()){
          s[nums[j]]++;
          sum+=nums[j];
          if(j-i+1==k){
              if(s.size()==k){
              maxi=max(maxi,sum);
              }
              s[nums[i]]--;
              sum=sum-nums[i];
              if(s[nums[i]]==0) s.erase(nums[i]);
              i++;
          }
          j++;
        }
        return maxi==INT_MIN?0:maxi;
    }
};