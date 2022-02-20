class Solution {
public:
    
    // static bool compare(vector<int> a, vector<int> b){
    //     return ((a[0] < b[0]) and (a[1]-a[0] > b[1]-b[0]));
    // }
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        
        int ans = 1;
        
        sort(intervals.begin(), intervals.end());
        
        int comp1 = intervals[0][0];
        int comp2 = intervals[0][1];
        
        for(int i= 1; i<n; ++i)
        {
            if(intervals[i][0] > comp1 && intervals[i][1] > comp2)
                ++ans;
            
            //since intervals are sorted now, we can just check for comp2
            if(intervals[i][1] > comp2)
            {
                comp1 = intervals[i][0];
                comp2 = intervals [i][1];
            }
        }
        
        return ans; 

    } 
};