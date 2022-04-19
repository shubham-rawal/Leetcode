class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> sol = nums;
        sort(sol.begin(), sol.end());
        if(sol == nums) return true;
        reverse(sol.begin(), sol.end());
        if(sol == nums) return true;
        
        return false;
    }
};