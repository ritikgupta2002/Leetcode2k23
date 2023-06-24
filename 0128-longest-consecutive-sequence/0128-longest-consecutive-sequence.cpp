class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

      if(nums.size()==0){
          return 0;
      }
      unordered_set<int> s ;
      for(int i =0 ;i<nums.size();i++){
          s.insert(nums[i]);
      }
      int maxlcs=0;
      int startofsequence;
      for(int i=0 ;i<nums.size();i++){
         
          if(s.find(nums[i]-1)!=s.end()){
              continue;
          }
          int value=nums[i];
          int cs=1;
          while(s.find(++value)!=s.end()) {
              cs+=1;
            }
          if(cs>maxlcs){
              maxlcs=cs;
          }
      }

      return maxlcs;

    }
};