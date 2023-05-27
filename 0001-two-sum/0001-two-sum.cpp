class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>sub;
    
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==target){
                        sub.push_back(i);
                        sub.push_back(j);
                    }
                }
            }
            return sub;
    }
};