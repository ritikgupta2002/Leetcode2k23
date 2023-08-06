class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i=0,j;
        int l, r ;
        long long  goal;
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        while(i<n-3){
            j=i+1;
            while(j<n-2){
                goal=target-nums[i];
                goal-=nums[j];
                l=j+1;
                r=n-1;
                while(l<r){
                    if(nums[l]+nums[r]<goal){
                        l++;
                    }
                    else if(nums[l]+nums[r]>goal){
                        r--;
                    }
                    else{
                        vector<int> v={nums[i],nums[j],nums[l],nums[r]};
                        ans.push_back(v);
                        while(l<r && nums[l]==v[2]) l++;
                        while(l<r && nums[r]==v[3]) r--;

                    }
            
                }
                int temp=nums[j];
                j++;
                while(j<n-2&&temp==nums[j]) j++;
            }
             int temp=nums[i];
             i++;
             while(i<n-3&&temp==nums[i]) i++;
        }

        return ans;
    }
};

