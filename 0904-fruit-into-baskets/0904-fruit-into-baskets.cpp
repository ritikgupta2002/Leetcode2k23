class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0 ;
        int j=0 ;
        unordered_map<int,int> m;
        int maxLen=0;
        while(j<fruits.size()){
            m[fruits[j]]++;
            while(m.size()>2){
                m[fruits[i]]--;
                if(m[fruits[i]]==0) m.erase(fruits[i]);
                i++;
            }
            if(m.size()<=2){
                maxLen=max(maxLen,j-i+1);
                j++;
            }
            
        }
        return maxLen;
    }
};