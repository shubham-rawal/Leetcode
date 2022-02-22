class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.length();
        int ans = 0;
        for(int i = 0; i<n; i++){
            int idx = columnTitle[i] -'A' + 1;
            
            //this is similar to breaking down 999 as 9*10*10 + 9*10 + 9 except that in this case our base is 26
            ans = 26*ans + idx;
        }
        return ans;
    }
};