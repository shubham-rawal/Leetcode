class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //creating an extra array
        vector<int> res;
        
        int i = 0, j = 0;
        while(i<m and j<n){
            if(nums1[i] < nums2[j]){
                res.push_back(nums1[i++]);
            }
            else{
                res.push_back(nums2[j++]);
            }
        }
        
        //leftover items
        while(i<m){
            res.push_back(nums1[i++]);
        }
        
        while(j<n){
            res.push_back(nums2[j++]);
        }
        
        for(int k = 0; k<m+n; k++){
            nums1[k] = res[k];
        }
    }
};