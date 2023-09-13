class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int start =0 ;
        int l , r ,target;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        while(start<nums.size()){
            target=nums[start]*-1;
            l=start+1;
            r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]<target){
                    l++;
                }
                else if (nums[l]+nums[r]>target)
                {
                    r--;
                }
                else{
                    vector<int> v;
                    v.push_back(nums[start]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    ans.push_back(v);

                    while(l<r&&nums[l]==v[1]) l++;
                    while(l<r&&nums[r]==v[2]) r--;

                }
            }
              int temp=nums[start];
                start++;
                while(start<nums.size()&&nums[start]==temp){
                    start++;
                }
        }
        return ans;
    }
};