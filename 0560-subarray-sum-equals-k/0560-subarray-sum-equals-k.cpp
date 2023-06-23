class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int > m;
        int sum=0; 
        int count=0;
        m[sum]=1;
        for(auto it : nums){
            sum+=it;
            int find=sum-k;
            if(m.find(find)!=m.end()){
                count+=m[find];
            }
            m[sum]++;
        }
        return count;
    }
};