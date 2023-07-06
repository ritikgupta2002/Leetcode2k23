class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroCount=0;
        int longestWindow=0;
        int start=0;
        for(int i=0 ;i<nums.size();i++){
           if(nums[i]==0) zeroCount++;
           while(zeroCount>1){
               if(nums[start]==0){
                   zeroCount--;
               }
               start++;   
           }
           longestWindow=max(longestWindow,i-start);

        }

        return longestWindow;
    }
};
//Time complexity :- O(2n)