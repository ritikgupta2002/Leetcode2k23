class Solution {
public:
    bool ispalindrome(string s , int p1, int p2){
        while(p1<=p2){
            if(s[p1]==s[p2]){
                p1++;
                p2--;
            }
            else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
      int p1=0;
      int p2=s.length()-1;
      while(p1<=p2){
          if(s[p1]==s[p2]){
              p1++;
              p2--;
          }
          else{
              return ispalindrome(s,p1+1,p2)||ispalindrome(s,p1,p2-1);
          }
      }
      return true;
    }
};