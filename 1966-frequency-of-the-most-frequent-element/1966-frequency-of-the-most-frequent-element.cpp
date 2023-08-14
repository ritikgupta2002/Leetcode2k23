class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long i=0 ;
        long j=0 ;
        long total=0;
        long maxLen=0;
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            total+=nums[j];
            while(nums[j]*(j-i+1)>total+k){
                total-=nums[i];
                i++;
            }
            maxLen=max(maxLen,(j-i+1));
            j++;
        }
        return maxLen;
    }
};


