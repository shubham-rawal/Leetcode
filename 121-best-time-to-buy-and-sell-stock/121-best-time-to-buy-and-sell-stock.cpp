class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       //the idea is to minimise buyPrice and to maximise profit
        //this can be done in a single loop as :
        
        int profit = 0;
        int buyPrice = prices[0];
        
        for(int i = 1; i<prices.size(); i++){
            buyPrice = min(buyPrice, prices[i]);
            profit = max(profit, prices[i] - buyPrice);
        }
        return profit;
    }
};