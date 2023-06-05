class Solution {
public:
    int getSum(int a, int b) {
        
      int Xor;
     unsigned int And;
      
      while(And!=0)
      {
         
         And=(a&b);
         Xor=a^b;
         a=Xor;
         b=And<<1;  
      }
        return Xor;
        
    }
};