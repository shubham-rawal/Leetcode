class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        vector<int>::iterator itr;
        
        for(itr = nums.begin(); itr < nums.end(); itr++){
            if(*itr == val) nums.erase(itr--);
        }
        return nums.size();
    }
};