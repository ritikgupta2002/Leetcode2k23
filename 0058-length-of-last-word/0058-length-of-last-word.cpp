class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int p1;
        int p2;
      
        for(int i=n-1;i>=0;i--){
            
            if(s[i]==' '){
                continue;
            }else{
                p1=i;
                break;
            }    
              
        }
        int count=0;
        for(int i=p1;i>=0;i--){
            if(s[i]!=' '){
                count++;
                continue;
            }else{
                break;
            }
        }
        
        return count;
        
    }
};


