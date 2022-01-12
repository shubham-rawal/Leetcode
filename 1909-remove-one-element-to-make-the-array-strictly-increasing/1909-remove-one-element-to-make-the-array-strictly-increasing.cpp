class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            vector<int> temp = nums;
            temp.erase(temp.begin() + i);
            
            // //check for equal terms
            // for(int j = 0; j<temp.size(); j++){
            //     if(temp[j] == temp[j+1])
            //         return false;
            // }
            
            auto i2 = std::adjacent_find(temp.begin(),temp.end(),std::greater_equal<int>());
        if (i2 == temp.end()) {
            return true;
        } else {
        continue;
    }
        }
        return false;
    }
};