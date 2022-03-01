class Solution {
public:
    //to prevent integer overflow, we store it in unsigned int
    unsigned int countSetBits(unsigned int n)
    {
        unsigned int count = 0;
        while (n) {
            //taking BITWISE AND of n and 1 with tell if that particular bit is set or not.
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> res(n+1, 0);
        for(int i = 0; i<=n; i++){
            res[i] = countSetBits(i);
        }
        return res;
    }
};