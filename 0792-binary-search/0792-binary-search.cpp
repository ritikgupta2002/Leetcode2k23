class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0 ;
        int hi = nums.size()-1 ;
        while(hi-lo>1){
            int mid=(hi+lo)/2;
            if(nums[mid]<target){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
        if(nums[lo]==target) return lo;
        else if(nums[hi]==target)return hi ;
        else return -1;
    }
};