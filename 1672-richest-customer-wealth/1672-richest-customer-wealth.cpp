class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int currentRowSum = 0, totalSum = 0;
        
        for(int i = 0; i<accounts.size(); i++){
            currentRowSum = 0;
            for(int j = 0; j<accounts[i].size(); j++){
                currentRowSum += accounts[i][j];
            }
            totalSum = max(totalSum, currentRowSum);
        }
        return totalSum;
    }
};