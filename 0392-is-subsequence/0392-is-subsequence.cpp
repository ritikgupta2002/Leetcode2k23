class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_map<char, vector<int>> m;
        int prev=-1;
        for(int i=0;i<t.length();i++){
            m[t[i]].push_back(i);
        }
        for(auto c : s ){
           auto it = m.find(c);
            if(it==m.end()){
                return false;
            }
            auto vec=it->second;
            int pos=upper_bound(vec.begin(),vec.end(),prev)-vec.begin();//to get the pos from vec array) 
            if(pos==vec.size()){
                return false;
            }
            prev=vec[pos];
        }
        return true;
    }
};

//follow up question time compleixty will be t.c:- 10^9(O(100)+log base 2 (10000));
//t.c= 10^9(O(100+13.458))  t.c=10^9(O(113))=10^9*O(C) ~ O(10^9) 