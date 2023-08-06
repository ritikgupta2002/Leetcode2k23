class Solution {
public:
      vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0 ;
        int j=0 ;
        int l,r ;
        int target;
        vector<vector<int>> ans;
        while(start<nums.size()-2){
            target=nums[start]*-1;
            l=start+1;
            r=nums.size()-1;
            while(l<r){
               if(nums[l]+nums[r]>target){
                   r--;
               }else if(nums[l]+nums[r]<target){
                   l++;
               }
               else{
                   vector<int>v={nums[start],nums[l++],nums[r--]};
                   ans.push_back(v);
                   while(l<r && nums[l]==v[1]){
                       l++;
                   }
                   while(l<r && nums[r]==v[2]){
                       r--;
                   }
               }
            }
            int temp=nums[start];
            start++;
            while(start<nums.size()-2&&temp==nums[start]){
                start++;
            }
        }
        return ans;
    }
};