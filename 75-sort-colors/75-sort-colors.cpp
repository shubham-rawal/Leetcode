class Solution {
public:
    void sortColors(vector<int>& nums) {
        //creating the freq array
        vector<int> freq(3, 0);
        
        //filling the freq array
        for(auto x: nums){
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