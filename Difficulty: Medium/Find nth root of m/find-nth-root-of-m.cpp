class Solution {
  public:
    int nthRoot(int n, int m) {
        if (m == 1) return 1;
        if (m == 0) return 0;
        for (int i = 1; i <= m; i++) {
            long long val = 1;
            for (int j = 1; j <= n; j++) {
                val *= i;
                if (val > m) break;
            }
            if (val == m) return i;
            if (val > m) break;
        }

        return -1;
    }
};