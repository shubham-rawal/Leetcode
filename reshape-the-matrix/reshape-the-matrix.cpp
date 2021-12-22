class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<int>> ans(r, vector<int>(c));
        vector<int> temp;
        int k = 0;
        
        if(m*n != r*c)
            return mat;
        else{
            
            
            //Converting 2d to 1d
            for(int i = 0; i < m ; i++){
                for(int j = 0; j < n; j++){
                    temp.push_back(mat[i][j]);
                }
            }
            
            //Converting 1d to 2d
            for(int i = 0; i<r; i++){
                for(int j = 0; j<c; j++){
                    ans[i][j] = temp[k++];
                }
            }
        }
        return ans;
    }
};