class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        /*
            approach : 
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            
            1
            1 1
            1 2 1
            1 3 3 1
            1 4 6 4 1
            
            
        */
        
        //creating the ans matrix
        vector<vector<int>> ans;
        
        //first row pushed back to the matrix
        ans.push_back({1});
        
        //for every subsequent row
        for(int i = 1; i<numRows; i++){
            vector<int> row;
            for(int j = 0; j<=i; j++){
                if(j == 0 or j == i){
                    row.push_back(1);
                }
                else{
                    row.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
            }
            ans.push_back(row);
        }
        
        return ans;
    }
};