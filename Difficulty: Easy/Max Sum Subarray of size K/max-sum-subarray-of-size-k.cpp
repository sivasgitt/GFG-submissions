class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size(), l=0, r = k-1, sum = 0;
        for(int i = 0; i < k ; i++) {
            sum += arr[i];
        }
        int maxSum = sum;
        while(r<n-1){
            sum -= arr[l];
            l++;
            r++;
            sum += arr[r];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};