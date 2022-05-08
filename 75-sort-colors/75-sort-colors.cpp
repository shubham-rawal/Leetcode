class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> freq(3, 0);
        
        for(auto x : nums){
            freq[x]++;
        }
        
        int idx = 0;
        for(int i = 0; i<3; i++){
            while(freq[i]--){
                nums[idx++] = i;
            }
        }
    }
};