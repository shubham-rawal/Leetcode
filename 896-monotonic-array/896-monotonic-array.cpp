class Solution {
public:
    
    bool increasing(vector<int> a){
        for(int i = 0; i<a.size() - 1; i++){
            if(a[i] > a[i+1])   return false;
        }
        return true;
    }
    
    bool decreasing(vector<int> a){
        for(int i = 0; i<a.size() - 1; i++){
            if(a[i] < a[i+1])   return false;
        }
        return true;
    }
    
    bool isMonotonic(vector<int>& nums) {
        return increasing(nums) or decreasing(nums);
    }
};