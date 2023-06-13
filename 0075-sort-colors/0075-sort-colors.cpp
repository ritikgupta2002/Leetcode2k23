class Solution {
public:
    void sortColors(vector<int>& nums) {
       unordered_map<int,int> m;
       for(auto i : nums){
           if(m.find(i)==m.end()){
                m[i]=1;
           }
           else m[i]++;
       }
       int j=0;
       for(int i=0;i<3;i++){
           while(m[i]--){
             nums[j]=i;
             j++;
           }
       }
       


    }
};