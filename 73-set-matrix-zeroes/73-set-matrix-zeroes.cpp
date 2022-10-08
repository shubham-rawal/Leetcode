class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        /*
            approach:
            we will create 2 vectors, row and column.
            Row vector will store all the row indexes where 0 is present
            Column vector will store all the column indexes where 0 is present.
            Now, on changing the matrix, if the row[i] == true(i.e. that row contains the 0) OR column[j] == 0(i.e. that column contains the 0), we mark the entire row and column as 0.
        */
        
        //number of rows
        int m = matrix.size();
        //number of cols
        int n = matrix[0].size();
            
        vector<bool> row(m, false);
        vector<bool> col(n, false);
        
        //1st iteration
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
            
        
        //2nd iteration
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(row[i] or col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }

    }
};