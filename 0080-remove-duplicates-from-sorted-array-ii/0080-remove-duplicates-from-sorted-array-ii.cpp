class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        if(n<3) return n ;
        int i=2;
        for(int indx=2;indx<nums.size();indx++){
            if(nums[indx]!=nums[i-2]){
                nums[i]=nums[indx];
                i++;
            }
        }
        return i ;
    }
};