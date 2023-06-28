class Solution {
public:
    int minSwaps(string s) {
       int count=0;
       for(auto i : s ){
           if(i=='[') count++;
           else {
               if(i==']'&& count!=0) count--;
           }
       }

       return (count+1)/2;
    }
};
