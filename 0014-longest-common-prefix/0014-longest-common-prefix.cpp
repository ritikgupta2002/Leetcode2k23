class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        int l= strs.size();
        int n= strs[0].length();
        int m =strs[l-1].length();
        int r=(n<m)?n:m;
        string lcp="";
        sort(strs.begin(),strs.end());
        for(int i=0;i<r;i++){
            if(strs[0][i]==strs[l-1][i]){
                lcp+=strs[0][i];
            }
            else {
                break;
            }
        }
        return lcp;
    }
};
// n=200 maximum
// m=200 maximum
// time complexity:- O(nlogn)+O(m) ~ O(200 log200)+O(200) ~O(nlogn)