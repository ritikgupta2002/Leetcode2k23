class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      list<int> dq;
      int j=0 ;
      int i=0 ;
      vector<int>ans;
      if(nums.size()<k){
          return ans;
      }
      while(j<nums.size()){
         
         while(dq.size()!=0&&dq.back()<nums[j]){
            dq.pop_back();
        }
        dq.push_back(nums[j]);

        if(j-i+1==k){
            ans.push_back(dq.front());
            if(nums[i]==dq.front()){
                dq.pop_front();
            }
            i++;    
        }
        j++;
      }
      return ans;
    }
};