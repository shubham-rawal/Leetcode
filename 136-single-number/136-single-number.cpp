class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        
        for(auto x : nums){
            mp[x]++;
        }
        int ans = 0;
        for(auto x : mp){
            if(x.second == 1){
                ans = x.first;
                return x.first;
            }
        }
        return ans;
    }
};