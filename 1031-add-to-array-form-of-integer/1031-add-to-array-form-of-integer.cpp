class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
            
            vector<int>ans;
            int carry=0 ;
            int sum;
            int i=num.size()-1;
            while(k>0 or i>=0){
                sum=carry;
                if(i>=0) sum+=num[i--];
                sum+=k%10;
                carry=sum/10;
                k=k/10;
                ans.push_back(sum%10);        
            }
            if(carry)ans.push_back(carry);
            reverse(ans.begin(),ans.end());
            return ans;
    }
};
