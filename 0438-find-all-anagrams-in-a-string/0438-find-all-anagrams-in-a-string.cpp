class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i=0 ;
        int j=0 ;
        unordered_map<char,int> m;
        int count=0;
        vector<int> ans;
        for(int i=0 ;i<p.length();i++){
            m[p[i]]++;
        }
        count=m.size();
        while(j<s.length()){
            if(m.find(s[j])!=m.end()){
                m[s[j]]--;
                if(m[s[j]]==0) count--;
            }
            if(j-i+1==p.length()){
                if(count==0) ans.push_back(i);
                if(m.find(s[i])!=m.end()){
                    m[s[i]]++;
                    if(m[s[i]]==1)count++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};