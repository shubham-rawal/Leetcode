class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //two pass
        vector<int> arr;
        for(auto x: nums){
            if(x%2==0){
                arr.push_back(x);
            }
        }
        
        for(auto x: nums){
            if(x%2==1){
                arr.push_back(x);
            }
        }
        
        return arr;
    }
};