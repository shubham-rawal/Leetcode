class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3)
            return {};
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
			    continue;
            int fst = nums[i];
            int k = i+1;
            int j = nums.size() - 1;
            while(k < j)
            {
                if(nums[k] + nums[j] > -1*fst)
                {
                    --j;
                }
                else if(nums[k] + nums[j] < -1*fst)
                {
                    k++;
                }
                else
                {
                    result.push_back({nums[i],nums[k],nums[j]});
                    while(k < j && nums[k] == nums[++k]);
                    while(k < j && nums[j] == nums[--j]);
                }
            }
        }
        return result;
    }
};