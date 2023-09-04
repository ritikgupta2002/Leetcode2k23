class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int size=1<<n;
        for(int i=0;i<size;i++){
            vector<int>sub;
            for(int j=0;j<n;j++){
                if((i&1<<j)!=0){
                    sub.push_back(nums[j]);
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};