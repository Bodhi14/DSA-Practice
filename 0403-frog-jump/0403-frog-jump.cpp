class Solution {
public:
    bool solve(vector<int>& stones, int ss, int ind, int last_jump, vector<vector<int>>& dp) {
        //base case
        if(ind==ss-1) return true;
        if(ind>=ss) return false;
        if(dp[ind][last_jump]!=-1) return dp[ind][last_jump];
        bool jump = false;
        for(int j=ind+1;j<ss;++j) {
            if((stones[j]-stones[ind])>=last_jump-1 && (stones[j]-stones[ind])<=last_jump+1) jump = jump || solve(stones, ss, j, stones[j]-stones[ind], dp);
        }
        return dp[ind][last_jump] = jump;
    }
    bool canCross(vector<int>& stones) {
        int n = (int)stones.size();
        int max_diff = stones[n-1] - stones[0];
        vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
        return solve(stones, n, 0, 0, dp);
    }
}; 