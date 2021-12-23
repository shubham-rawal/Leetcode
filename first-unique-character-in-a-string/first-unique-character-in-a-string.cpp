class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        
        for(int i = 0; i<s.length(); i++){
            int c = s[i] - 'a';
            freq[c]++;
        }
        
        for(int i = 0 ; i < s.length(); i++){
            int c = s[i] - 'a';
            if(freq[c] ==1)
                return i;
        }
        return -1;
    }
};