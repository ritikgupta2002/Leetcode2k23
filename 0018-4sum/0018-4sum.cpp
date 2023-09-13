class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i=0,j,l,r;
        long long  goal;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            j=i+1;
            while(j<nums.size()){
            l=j+1;
            r=nums.size()-1;
            goal=target-nums[i];
            goal-=nums[j];
            while(l<r){
               if(nums[l]+nums[r]>goal)r--; 
               else if(nums[l]+nums[r]<goal)l++;
               else{
                   vector<int> v={nums[i],nums[j],nums[l],nums[r]};
                   ans.push_back(v);
                   while(l<r && nums[l]==v[2]) l++;
                   while(l<r && nums[r]==v[3]) r--;
               }

            }
            int temp=nums[j];
            j++;
            while(j<nums.size()&&nums[j]==temp) j++;

            }
            int temp=nums[i];
            i++;
            while(i<nums.size()&&nums[i]==temp) i++;
        }
        return ans;
    }
};