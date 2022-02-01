class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string temp;
        
        int maxSize = 0;
        unordered_map<char, int> mp;
        
        for(int i = 0; i<s.length(); i++){
            for(int j = i; j<s.length(); j++){
                mp[s[j]]++;

                if(mp[s[j]] > 1){
                    mp.clear();
                    temp.clear();
                    break;
                }

                temp.push_back(s[i]);
                maxSize = max(maxSize, (int)temp.length());
            }
        }
         return maxSize;
    }
};