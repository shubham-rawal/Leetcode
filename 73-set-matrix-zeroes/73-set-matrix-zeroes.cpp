class Solution {
public:
    
    void setZeroes(vector<vector<int>>& matrix) {
        //number of rows and columns
        int m = matrix.size();
        int n = matrix[0].size();
        
        //we take 2 dummy arrays to keep track whether the particular row or column has a 0 or not
        vector<int> dummy1(m, -1);
        vector<int> dummy2(n, -1);
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    dummy1[i] = 0;
                    dummy2[j] = 0;
                }
            }
        }
        
        //now all the indices that have 0 in dummy1 refer to the rows that need to be made 0 in the matrix.
        //similarly all the indices that have 0 in dummy2 refer to the columns that need to be made 0
        //i.e. if dummy[i] == 0 || dummy[j] == 0, matrix[i][j] = 0
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(dummy1[i] == 0 or dummy2[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        return;
    }
};