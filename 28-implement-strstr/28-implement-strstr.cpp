class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() == needle.length()){
            if(haystack == needle)  return 0;
            else return -1;
        }
        int idx = 0, j = 0;
        for(int i = 0; i<haystack.size(); i++){
            if(haystack[i] == needle[0]){
                idx = 1;
                j = i+1;
            }
            if(needle.size() == 1 and idx == 1){
                return j-1;
            }
            while(haystack[j] and needle[idx] and (haystack[j] == needle[idx])){
                idx++;
                j++;
                if(idx == needle.size())  return i;
            }
        }
        return -1;
    }
};