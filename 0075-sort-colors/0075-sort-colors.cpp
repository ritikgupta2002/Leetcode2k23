class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int i=0 ;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=0;
        for(int i=0;i<3;i++){
            while(m[i]--){
                nums[k++]=i;
            }
        }

    }
};