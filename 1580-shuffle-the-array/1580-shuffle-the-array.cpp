class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      
        int i=0;
        int j=n;
        vector<int> nums1;
        while(n){
            nums1.push_back(nums[i++]);
            nums1.push_back(nums[j++]);
            n--;
        }
        return nums1;
    }

    // time complexity :- O(n)
    // space complexity:- O(2n)
};