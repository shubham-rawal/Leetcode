class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = -1;
        
        int minEle = nums[0];
        
        for(int i = 0; i<nums.size(); i++){
            minEle = min(minEle, nums[i]);
            
            diff = max(diff, nums[i] - minEle);
        }
        if(diff == 0)   return -1;
        return diff;
    }
};