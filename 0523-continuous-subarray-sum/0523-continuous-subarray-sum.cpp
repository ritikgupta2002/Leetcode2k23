class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> m;
     int sum=0;
     m[0]=-1;//remember this ,for value 0 scenario we add this into our  hashmap 
     
     for(int i=0 ;i<nums.size();i++){
        sum+=nums[i];
        if(m.find(sum%k)!=m.end()){
            if(i-m[sum%k]>=2) return true;
        }
        else m[sum%k]=i;
     }
     return false;
    
    }
};