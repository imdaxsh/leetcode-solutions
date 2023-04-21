class Solution {
public:
    int climbStairs(int n) {
            if (n <= 3) return n;
        int prev = 3, prev2 = 2, res;
        for (int i = 4; i <= n; i++) {
            res = prev + prev2;
            prev2 = prev;
            prev = res;
        }
        return res;
    }
};