class Solution {
public:
    int search(vector<int>& nums, int target) {
        //modified binary search using divide and conquer
        int n = nums.size();
        int s = 0; 
        int e = n-1;
        
        while(s<=e){
            int mid = (s+e)/2;
            
            if(target == nums[mid]) return mid;
            
            //otherwise
            if(nums[s] <= nums[mid]){
                //left
                if(target >= nums[s] and target <= nums[mid]){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
            else{
                //right
                if(target >= nums[mid] and target <= nums[e]){
                    s = mid + 1;
                }
                else    e = mid - 1;                
            }
        }
        return -1;
    }
};