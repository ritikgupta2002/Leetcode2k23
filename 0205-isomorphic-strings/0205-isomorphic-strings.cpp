class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m1;
        unordered_map<char,char>m2;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<t.length();i++){
           if((m1.find(s[i])!=m1.end()&&m1[s[i]]!=t[i])||
             (m2.find(t[i])!=m2.end()&&m2[t[i]]!=s[i])){
               return false;
           }
           m1[s[i]]=t[i];
           m2[t[i]]=s[i];
        }
        return true;
    }
};