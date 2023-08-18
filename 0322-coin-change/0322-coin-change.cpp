class Solution {
public:
    int solve(vector<int>& coins, int ind, int amount, vector<vector<int>>& dp) {
        int n = coins.size();
        //base case
        if(amount==0) return 0;
        if(amount<0 || ind>=n) return 1e8;
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        //end of the base case
        
     
        
        int take = 0, doNotTake = 0;
         
        //If I take the coin
        
        take = 1 + solve(coins, ind, amount-coins[ind], dp);
        
        //If I do not take the coin
        
        doNotTake = solve(coins, ind+1, amount, dp);
        
        return dp[ind][amount] = min(take, doNotTake);
     
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1, vector<int>(10001, -1));
        return (solve(coins, 0, amount, dp) == 1e8) ? -1 : solve(coins, 0, amount, dp);
    }
};