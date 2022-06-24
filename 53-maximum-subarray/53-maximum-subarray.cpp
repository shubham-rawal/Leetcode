class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algorithm
        /*
            approach :
            we maintain a currentSum and a maximumSum.
        */
        
        int cs = 0, ms = INT_MIN;
        //to rule out the possibility of all elements being negative,
        ms = *max_element(nums.begin(), nums.end());
        if(ms<0)    return ms;
        //now maintaining cs
        for(auto x: nums){
            cs+=x;
            if(cs<0)    cs = 0;
            ms = max(ms, cs);
        }
        
        return ms;  
    }
};