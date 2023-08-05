class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0 ;
        int j=0 ;
        long long  sum=0 ;
        long long  maxi=INT_MIN;
        unordered_map<int,int>m;
        while(j<nums.size()){
            m[nums[j]]++;
            sum+=nums[j];
            if(j-i+1==k){
               if(m.size()==k){
                   maxi=max(maxi,sum);
               }
               m[nums[i]]--;
               sum=sum-nums[i];
               if(m[nums[i]]==0) m.erase(nums[i]);
               i++;
            }
            j++;
        }
        return maxi==INT_MIN?0:maxi;
    }
};