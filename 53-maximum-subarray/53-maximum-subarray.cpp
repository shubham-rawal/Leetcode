class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs = 0, ms = INT_MIN, flag = 0;
        
        //if all elements in the subarray are -ve, return the least negative element since contiguous subarray is required.
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]>=0){
            flag = 1;
            ms = 0;
            break;
        }
        ms = max(ms, nums[i]);
    }
      if(flag == 1){
        for(int i = 0 ; i< nums.size(); i++){
            cs += nums[i];
            
            if(cs<0)
                cs = 0;
            
            ms = max(ms, cs);
        }
      }
        return ms;
    }
};