class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0 ;
        int j=0 ;
        int maxi=INT_MIN;
        list<int> q;
        vector<int> ans;
        while(j<nums.size()){
            while(q.size()!=0&&nums[j]>q.back()){
                q.pop_back();
            }
            q.push_back(nums[j]);

            if(j-i+1==k){
                ans.push_back(q.front());
                if(nums[i]==q.front()){
                    q.pop_front();
                }
                    i++;
            }
            j++;
        }
        return ans;
    }
};