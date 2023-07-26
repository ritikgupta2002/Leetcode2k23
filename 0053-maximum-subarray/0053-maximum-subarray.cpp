class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start=0;
        int sum=0;
        int maxsum=INT_MIN;
        int AnsStart=-1;
        int AnsEnd=-1;
     for(int i=0 ; i<nums.size();i++){
           if(sum==0) start=i;
           sum+=nums[i];
           if(sum>maxsum){
               maxsum=sum;
               AnsStart=start;
               AnsEnd=i;
           }
           if(sum<0){
               sum=0;
           }
       }
      return maxsum; 
    }
};

//kadane's algo