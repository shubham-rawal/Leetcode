class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> v;
        for(int i = 0; i<nums.size(); i++){
            v.push_back({nums[i], i});
        }
        
        sort(v.begin(), v.end());
        
        vector<int> ans;
        
        int s = 0;
        int e = nums.size() - 1;
        while(s<=e){
            if(v[s].first + v[e].first == target){
                ans.push_back(v[s].second);
                ans.push_back(v[e].second);
                return ans;
            }
            else if(v[s].first + v[e].first < target){
                s++;
            }
            else e--;
        }
        return ans;
    }
};