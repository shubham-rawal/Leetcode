class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> p(n, ' ');
        for(int i = 0; i<n; i++){
            p[i] = s[n-i-1];
        }
        
        s = p;
    }
};