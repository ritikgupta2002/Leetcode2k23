class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i=0 ;
        int j ;
        int l ;
        int r ;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        while(i<n-3){     
            j=i+1;   
            while(j<n-2){
                 l=j+1;
                 r=n-1;
                 long long goal=target-nums[i];
                 goal-=nums[j];
                while(l<r){
                if(nums[l]+nums[r]>goal) r--;
                else if(nums[l]+nums[r]<goal) l++;
                
                else{
                    vector<int> temp={nums[i],nums[j],nums[l],nums[r]};
                    ans.push_back(temp);
                    while(l<r&&nums[l]==temp[2]) l++;
                    while(l<r&&nums[r]==temp[3]) r--;
                    }
                }

                int temp1=nums[j];
                while(j<n-2&&nums[j]==temp1){
                    j++;
                }
            }
            int temp2=nums[i];
            while(i<n-3&&nums[i]==temp2) i++;
        }
        return ans;
    }
};