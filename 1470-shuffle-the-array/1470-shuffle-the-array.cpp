class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        bool firstHalf = true;
        
        vector<int> ans;
        int idx1 = 0, idx2 = n;
        while(idx1<n and idx2<2*n){
            ans.push_back(nums[idx1++]);
            ans.push_back(nums[idx2++]);
        }
        return ans;
    }
};