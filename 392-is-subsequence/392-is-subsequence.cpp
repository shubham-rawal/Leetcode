class Solution {
public:
    bool isSubsequence(string s, string t) {
        //brute force to check order as well as presence
        
        int j = 0;
        for(int i = 0; i<t.length(); i++ and j<s.length()){
            if(s[j] == t[i])    j++;
        }
        
        //to see if all the elements of s have been covered or not.
        return (j == s.length());
    }
};