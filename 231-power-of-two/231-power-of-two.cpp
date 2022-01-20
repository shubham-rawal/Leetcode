class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>1 and ceil(log2(n)) == floor(log2(n)) )
            return true;
        
        if(n==1)    return true;
        return false;
    }
};