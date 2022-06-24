class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //m = number of rows
        int m = matrix.size();
        //n = number of cols
        int n = matrix[0].size();
        
        //approach : create 2 vectors, one to maintain row and another to maintain column
        vector<int> row(m, -1);
        vector<int> col(n, -1);
        
        //iterate through the matrix and see where the 0's are
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(row[i] == 0 or col[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};