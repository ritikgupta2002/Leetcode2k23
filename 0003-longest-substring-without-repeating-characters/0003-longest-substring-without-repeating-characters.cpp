class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0 ;
        int j=0 ;
        unordered_map<char,int> m ;
        int sum=0;
        int maxLen=0;
        while(j<s.length()){
            m[s[j]]++;
            sum=sum+1;
            while(sum>m.size()){
                sum-=m[s[i]];
                m[s[i]]--;
                if(m[s[i]]==0) m.erase(s[i]);
                else sum+=m[s[i]];
                i++;
            }
            if(m.size()==sum){
                maxLen=max(maxLen,j-i+1);
                j++;
            }
            
        }
        return maxLen;
    }
};