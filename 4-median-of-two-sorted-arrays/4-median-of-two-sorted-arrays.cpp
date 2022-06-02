class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        
        //pushing back elements into 1st array
        for(int i = 0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        
        //now sorting the entire array
        sort(nums1.begin(), nums1.end());
        
        //now checking if combined is odd/even
        int n = nums1.size();
        if(n % 2 == 1){
            median = (double)nums1[n/2];
            return median;
        }
         
        median = (double)(nums1[n/2 - 1] + nums1[(n/2)])/2;
        return median;
    }
};