class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //optimised solution
        unordered_map<char, int> freqRow[9], freqCol[9], freqBox[3][3];
        
        for(int i = 0; i< 9; i++){
            for(int j = 0; j<9; j++){
                char current = board[i][j];
                
                if(current == '.') continue;
                
                //placed here so that it returns false for the first time a number appears.
                bool exists = (freqRow[i][current] or freqCol[j][current] or freqBox[i/3][j/3][current]);
                
                if(exists) return false;
                
                freqRow[i][current]++;
                freqCol[j][current]++;
                freqBox[i/3][j/3][current]++;
            }
        }
        return true;
    }
};