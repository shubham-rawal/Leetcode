class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        
        string first = strs[0];
        string last = strs[strs.size() - 1];
        
        string ans;
        int i = 0;
        while(i<first.length() and i<last.length()){
            if(first[i] != last[i]) break;
            ans.push_back(first[i]);
            i++;
        }
        return ans;
    }
};