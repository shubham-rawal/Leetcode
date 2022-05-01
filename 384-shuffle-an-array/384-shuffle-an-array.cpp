class Solution {
    vector<int> nums;
    vector<int> original;
public:
    Solution(vector<int>&nums) : nums(nums), original(nums){
    }
    
    vector<int> reset() {
        nums = original;
        return original;
    }
    
    vector<int> shuffle() {
        for(int i = 0; i<nums.size(); i++){
            swap(nums[i], nums[rand()%nums.size()]);
        }
        return nums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */