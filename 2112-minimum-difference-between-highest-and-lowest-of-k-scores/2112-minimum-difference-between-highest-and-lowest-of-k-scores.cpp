class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int min=INT_MAX;
        int p1;
        int p2;
        int res;

        sort(nums.begin(),nums.end());
        for(int i=0 ;i<nums.size();i++){
            p1=i;
            if(p1+k-1!=nums.size())
            {
            p2=(i+k)-1;
            res=abs(nums[p1]-nums[p2]);
                if(min>res){
                min=res;
                }
            }
            else{
                break;
            }
                       
        }
       
        
        return min;
    }
};