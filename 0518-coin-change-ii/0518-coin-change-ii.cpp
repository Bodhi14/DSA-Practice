class Solution {
public:
    int solve(int i, int amount, vector<int>& coins, vector<vector<int>>& dp) {
        //base case
        if(amount==0) return 1;
        if(dp[amount][i]!=-1) return dp[amount][i];
        int ways = 0;
        for(int j=i;j<coins.size();++j) {
            if(amount>=coins[j]) ways += solve(j, amount-coins[j], coins, dp);
        }
        
        return dp[amount][i] = ways;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(5001, vector<int>(301, -1));
        return solve(0, amount, coins, dp);
    }
};