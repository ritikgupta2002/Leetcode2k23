class Solution {
public:
   int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    
    int i = 0;
    long long total = 0; // Using long long to prevent overflow
    int maxLen = 1; // At least one element will be in the subarray
    
    for(int j = 1; j < nums.size(); j++) {
        total += (long long)(j - i) * (nums[j] - nums[j - 1]);
        
        while (total > k) {
            total -= (nums[j] - nums[i]);
            i++;
        }
        
        maxLen = max(maxLen, j - i + 1);
    }
    
    return maxLen;
}
};