class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k = 0;
        for(auto itr = nums.begin(); itr<nums.end(); itr++){
            if(*itr != val) nums[k++] = *itr;
        }
        return k;
    }
};