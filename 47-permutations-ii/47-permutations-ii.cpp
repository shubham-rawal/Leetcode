class Solution {
public:
    void solve(vector<int> & nums, set<vector<int>> &ans, int i){
        int n = nums.size();
        //base case
        if(i == n){
            ans.insert(nums);
            return;
        }

        //rec case
        for(int idx = i; idx < n; idx++){
            swap(nums[i], nums[idx]);
            solve(nums, ans, i+1);
            swap(nums[i],  nums[idx]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        solve(nums, ans, 0);
        
        vector<vector<int>> res(ans.begin(), ans.end());
        
        return res;
    }
};