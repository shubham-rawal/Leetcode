class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1 = 0, c1 = 0;
        int r2 = n-1, c2 = n-1;
        int val = 1;
        
        //resultant matrix
        vector<vector<int>> a(n, vector<int>(n));
        
        while(r1<=r2 and c1<=c2){
            //left to right(row will be fixed)
            for(int i = c1; i<=c2; i++){
                a[r1][i] = val++;       
            }
            r1++;
            
            //top to bottom (col will be fixed)
            for(int i = r1; i<=r2; i++){
                a[i][c2] = val++;
            }
            c2--;
            
            //right to left (row will be fixed)
            for(int i = c2; i>=c1; i--){
                a[r2][i] = val++;
            }
            r2--;
            
            //bottom to top (col will be fixed)
            for(int i = r2; i>=r1; i--){
                a[i][c1] = val++;
            }
            c1++;
        }
        
        return a;
    }
};