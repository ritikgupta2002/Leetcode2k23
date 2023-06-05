class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=nums.size();
        for(int i=0;i<nums.size();i++){
            res=res^i;
            res=res^nums[i];
        }
        return res;

    }
};
// time complexity:- O(n)
// space complexity:- O(1)
