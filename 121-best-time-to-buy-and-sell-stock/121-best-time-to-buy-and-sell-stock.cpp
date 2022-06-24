class Solution {
public:
    int maxProfit(vector<int>& prices) {
      /*
        approach: we find the minimum buying price and find the maximum selling price
      
      */
        
        int buyingPrice = prices[0];
        int profit = 0;
        
        for(auto x: prices){
            buyingPrice = min(buyingPrice, x);
            profit = max(profit, x - buyingPrice);
        }
        
        return profit;
    }
};