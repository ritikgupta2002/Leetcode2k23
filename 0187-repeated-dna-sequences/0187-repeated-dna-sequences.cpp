class Solution {
public:
   vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>m;
        vector<string>ans;
        if(s.length()<10){
            return ans;
        }
        for(int i=0;i<=s.length()-10;i++){
            string st="";
             for(int j=i;j<i+10;j++){
                 st+=s[j];     
             }
             m[st]++;
        }

        for (auto i = m.begin(); i != m.end(); i++)
        {
            if(i->second>=2){
                ans.push_back(i->first);
            }
        }
        return ans;
    }
};