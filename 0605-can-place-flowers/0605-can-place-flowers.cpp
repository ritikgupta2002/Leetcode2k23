class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int count=0;
       int i=0;
       int size=flowerbed.size();
       while(size--){
           if(flowerbed[i]==0){
               bool leftplot=(i==0)||(flowerbed[i-1]==0);
               bool rightplot=(i==flowerbed.size()-1)||(flowerbed[i+1]==0);

               if(leftplot&&rightplot){
                   flowerbed[i]=1;
                   count++;
                   if(count==n) return true;
               }

           }
           i++;
       }
       return count>=n;
        
    }
};