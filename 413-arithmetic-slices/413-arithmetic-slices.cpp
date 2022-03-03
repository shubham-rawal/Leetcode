class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        //sliding window approach
        int n = nums.size();
        
        if(n<3) return 0;
    
        int ans = 0;
        int count = 2;
        int i = 2;
        for(i = 2; i<n; i++){
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
                count++;
            }
            else{
                if(count >= 3){
                    int x = count-2;
                    ans+= x*(x+1)/2;
                    count = 2;
                }
            }
        }
        if(i==n){
            if(count>=3){
                int x = count-2;
                ans+= x*(x+1)/2;
                count = 0;
            }
        }
        return ans;     
    }
};