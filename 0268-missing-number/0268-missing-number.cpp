class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=nums.size();
        for(int i=0;i<nums.size();i++){
            res=res^i;
            res=res^nums[i];
        }
        return res;

    }
};
// time complexity:- O(n)
// space complexity:- O(1)


//second approach 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
       int total = nums.size()*(nums.size() + 1)/2;
       int sum=0;
  
       for(auto i : nums){
            sum+=i;
       }
       return total-sum;
 

    }
};
