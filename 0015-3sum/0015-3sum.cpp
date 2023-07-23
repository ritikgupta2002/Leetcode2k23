class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int start=0;
        int target;
        int l ,r;
        if(nums.size()<=2) return ans;
        sort(nums.begin(),nums.end());
        while(start<nums.size()-2){
            target=nums[start]*-1;
            l=start+1;
            r=nums.size()-1;
            while(l<r){
//using two pointers at the end approach only because we have sorted the input so we can use here in this problem 
                if(nums[l]+nums[r]>target) r--;
                else if(nums[l]+nums[r]<target){
                    l++;
                }
                else{
                    vector<int> v;
                    v.push_back(nums[start]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    ans.push_back(v);

// we are jumping the repeated value inorder to generate the different solutions 
                    while(l<r&&nums[l]==v[1]) l++;
                    //take example -7 -3 1 2 3 3 4 5 and think 
                    while(l<r&&nums[r]==v[2]) r--;
                }
            }
            int temp=nums[start];
            while(start<nums.size()-2&&nums[start]==temp) start++;

        }
        return ans;
    }
};
//optimisesd approach .