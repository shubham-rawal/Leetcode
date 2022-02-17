class Solution {
public:
    void solve(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int i, int k){
        //base case
        if(k == 0){
            ans.push_back(temp);
            return;
        }
        if(k<0) return;
        if(i == arr.size()) return;
        
        //rec case
        
        //take the ith element
        temp.push_back(arr[i]);
        solve(arr, temp, ans, i, k-arr[i]);
        //backtracking
        temp.pop_back();
        
        //not take the ith element
        solve(arr, temp, ans, i+1, k);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, temp, ans, 0, target);
        return ans;
    }
};