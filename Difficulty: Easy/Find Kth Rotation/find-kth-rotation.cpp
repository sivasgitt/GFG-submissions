class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int min = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] < arr[min]) min=i;
        }
        return min;
    }
};