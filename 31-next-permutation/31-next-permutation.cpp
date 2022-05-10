class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
            approach:   we traverse the array from behind, then find the element where a[i]<a[i+1];
            let's name this index as ind1;
            now, we traverse the array from behind again, and find the element that is greater than a[ind1];
            let's name this ind2;
            
            now, we swap(a[ind1], a[ind2]);
            now, we reverse the array from ind1+1;
        */
        int n = nums.size();
        int left = -1;
        //checking the first decrement in the curve
        for(int i = n-1; i>=1; i--){
            if(nums[i] > nums[i-1]){
                left = i-1;
                break;
            }
        }
        
        //if the array is already in it's highest possible value
        if(left == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        //otherwise we traverse again from the back uptil left and find the index that is greater than nums[left]
        
        for(int i = n-1; i>left; i--){
            if(nums[i]>nums[left]){
                swap(nums[i], nums[left]);
                reverse(nums.begin() + left + 1, nums.end());
                break;
            }
        }
        
    }
};