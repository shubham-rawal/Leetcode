class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sorting the intervals
        sort(intervals.begin(), intervals.end());
    
        //ans vector
        vector<vector<int>> ans;
    
        //to store current values
        pair<int, int> v;
        v.first = intervals[0][0];
        v.second = intervals[0][1];
        
        for(int i = 0; i<intervals.size()-1; i++){
            
                /*
                    we have to compare the second element of the pair with the first of the next interval element. To check if the interval overlaps the already saved pair
                */
            if(intervals[i+1][0] <= v.second){
                // v.first = min(v.first, intervals[i+1][0]);
                v.second = max(v.second, intervals[i+1][1]);
            }
            else{
                ans.push_back({v.first, v.second});
                v.first = intervals[i+1][0];
                v.second = intervals[i+1][1];
            }
        }
        ans.push_back({v.first, v.second});
        return ans;
    } 
        
};