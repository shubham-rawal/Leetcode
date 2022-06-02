class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size();  //number of rows
        int c = matrix[0].size();   //number of columns
        
        
        vector<vector<int>> ans(c, vector<int>(r, 0));
        
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                ans[j][i] = matrix[i][j];
            }
        }
        
        return ans;
    }
};