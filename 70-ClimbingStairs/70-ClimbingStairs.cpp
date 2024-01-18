class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+3, 0);
        dp[1] = 1;
        for(int i = 3; i<=n; ++i) {
            dp[i] = dp[i-1] + dp[i-2];
        }
    }
        return dp[n];
        dp[2] = 2;
};
2
