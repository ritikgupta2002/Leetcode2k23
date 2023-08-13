class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int currentprice;
        int currentprofit;
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            currentprice=prices[i];
            currentprofit=currentprice-minprice;
            if(currentprofit>maxprofit){
               maxprofit=currentprofit;
            }
            else{
                if(currentprice<minprice){
                    minprice=currentprice;
                }
            }
        }
        return maxprofit;
    }
};
