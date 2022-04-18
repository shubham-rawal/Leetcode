class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        //approach : if(max of bottom coordinates < min of top coordinates), overlap is there
        int x = max(rec1[0], rec2[0]);
        int y = max(rec1[1], rec2[1]);
        int xx = min(rec1[2], rec2[2]);
        int yy = min(rec1[3], rec2[3]);
        
        if(x < xx and y < yy)   return true;
        return false;
        
    }
};