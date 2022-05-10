class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*
            approach : take transpose of the entire matrix and then reverse each row.
        */
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        //transpose
        for(int i = 0; i<m; i++){
            for(int j = i; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //row reversal
        for(int i = 0; i<m; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};