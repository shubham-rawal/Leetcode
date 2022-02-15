class Solution {
public:
    int singleNumber(vector<int>& nums) {
       //using bit manipulation
        /*
            a^a^a^a.... even times = 0 and a^a^a...odd times = a;
        */
        int ans = 0;
        
        for(auto x: nums)   ans^=x;
        return ans;
    }
};