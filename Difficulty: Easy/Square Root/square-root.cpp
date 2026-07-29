class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low = 1, high = n, ans;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(mid*mid<=n) ans = mid;
            if(mid*mid > n) high = mid-1;
            else low = mid+1;
        }
        return ans;
    }
};