class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()==1 && t.length()>1||s.length()>1 && t.length()==1){
            return false;
        }
       
        unordered_map<char,int>m ;
        unordered_map<char,int>n;
        for(auto i : s ){
            if(m.find(i)==m.end()){
                m.insert(make_pair(i,1));
            }
            else {
                m[i]++;
            }
        }//storing the frequecy of each char present in s 
        
          for(auto i : t ){
            if(n.find(i)==n.end()){
                n.insert(make_pair(i,1));
            }
            else {
                n[i]++;
            }
        }//storing the frequecy of each char present in t 

        if(m==n)return true;
        else return false;

    }
};