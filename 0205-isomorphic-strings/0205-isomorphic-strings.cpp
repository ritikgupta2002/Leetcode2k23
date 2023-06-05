class Solution {
public:
    bool isIsomorphic(string s, string t) {
       
        unordered_map<char,char > m;
            
            for(int i=0;i<s.length();i++){
                
                if(m.find(s[i])==m.end()) 
                {      
                       for(auto it : m ){
                           if(it.second==t[i]){
                                return false;
                           }                       
                       }
                       m[s[i]]=t[i];
                      
                }
                else{
                    if(m[s[i]]!=t[i]){
                        return false;
                    }
                }
                
            }
        return true;
    }
};
//time complexity :- O(s.length())*O(128)= ~O(s.length)