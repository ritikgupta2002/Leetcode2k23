class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int difference;
        for(int i=0;i<prices.size();i++){
            if(i+1==prices.size())
            {
                break;
            }
            if(prices[i]<prices[i+1]){
                difference=prices[i+1]-prices[i];
                maxprofit+=difference;
            }
            else continue;
        }

        return maxprofit;
    }
}; 