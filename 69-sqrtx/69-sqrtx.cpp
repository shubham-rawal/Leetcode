class Solution {
public:
    int mySqrt(int x) {
        //binary search OP
        
        
        //1e5 because x^2 1e5*1e5 se toh kam hi hoga
        long long s = 0, e = 1e5;
        while(s<=e){
            long long mid = (s+e)/2;
            long long m1 = mid*mid;
            long long m2 = (mid+1)*(mid+1);
            if(x>=m1 and x<m2){
                return mid;
            }
            else if(x>m1)   s=mid+1;
            else    e=mid-1;
        }
        
        return 0;
    }
};