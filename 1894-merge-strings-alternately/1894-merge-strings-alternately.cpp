class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1=0;
        int p2=0;
        string res="";
        int l1=word1.length();
        int l2=word2.length();
        int smallerlen=min(l1,l2);
        while(smallerlen--){
            res+=word1[p1];
            res+=word2[p2];
            p1++;
            p2++;     
        }
        while(p1!=word1.length()){
            res+=word1[p1];
            p1++;
        }
        while(p2!=word2.length()){
           res+=word2[p2];
           p2++;
        }

        return res;

    }

};