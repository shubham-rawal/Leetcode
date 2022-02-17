class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int count = 0;
        int i = 0;
        while(s[i] == ' ') i++;
        while(s[i] != ' ' and i<s.size()){
            count++;
            i++;
        }
        return count;
        
    }
};