class Solution {
public:
   vector<string> findRepeatedDnaSequences(string s) {
       unordered_map<char , int > bitmask ;
       bitmask['A']=0;
       bitmask['C']=1;
       bitmask['G']=2;
       bitmask['T']=3;

       vector<string> ans;
       unordered_set<int> unique;
       unordered_set<int> repeated;

       string sequence;
       if(s.length()<=10){
           return ans;
       }
       for(int i=0; i<=s.length()-10;i++){//O(N-10);
           sequence=s.substr(i,10);

           int bitsequence=0;

           for(char ch: sequence){
               bitsequence=(bitsequence<<2)|bitmask[ch];
//left shifted by 2 because we can represent 0 , 1, 2, 3 in min 2 bits so we shift only 2 bits to left for constructing bitmask of the sequence .
           }

           if(unique.count(bitsequence)&&!repeated.count(bitsequence)){
               ans.push_back(sequence);
               repeated.insert(bitsequence);
           }
           else{
               unique.insert(bitsequence);
           }
       }
       return ans;
    }
};