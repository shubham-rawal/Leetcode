class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //checking
        int profit=0;
        int buyPrice = prices[0];
        
        for(int i = 0; i<prices.size(); i++){
            buyPrice = min(buyPrice, prices[i]);
            profit = max(profit, prices[i] - buyPrice);
        }
        return profit;
    }
};