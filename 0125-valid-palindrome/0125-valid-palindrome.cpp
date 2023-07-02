class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> st1;
        stack<char> st2;

        for(int i=0; i<s.length() ; i++ ){
          if(isalpha(s[i])){
              //want to remove nonalphabatic chars thats why
              char ch= tolower(s[i]);
              st1.push(ch);
          }
          if(isdigit(s[i])){
              st1.push(s[i]);
          }

        }
        for(int i=s.length(); i>=0 ; i-- ){
          if(isalpha(s[i])){
              //want to remove nonalphabatic chars thats why
              char ch= tolower(s[i]);
              st2.push(ch);
          }
          if(isdigit(s[i])){
              st2.push(s[i]);
          }

        }

        while(!st1.empty()){
            if(st1.top()==st2.top()){
                st1.pop();
                st2.pop();
            }
            else{
                return false;
            }

        }

        return true;

    }
};