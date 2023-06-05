class Solution {
public:
    int missingNumber(vector<int>& nums) {
      unordered_map<int,int> m;
      for(int i=0;i<nums.size();i++){
          m[nums[i]]=i;//stored the keys in hashmap 
      }
      
      int diff;
      for(int i=0;i<nums.size();i++){
          diff=nums.size()-nums[i];
          if(m.find(diff)!=m.end()){
              if(diff==0){
                  diff++;
              }
              if(diff==2){
                  diff--;
              }
              continue;
          }
          else break;
      }
     return diff;
        
    }
};