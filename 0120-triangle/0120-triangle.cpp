class Solution {
private:
    int solve(vector<vector<int>>& triangle, int i, int j, vector<vector<int>>& dp) {
        int n = triangle.size();
    
        
        if(i>=n) return 0; // I am returning a zero sum
        
        //memoization
        if(dp[i][j]!=-1) return dp[i][j];
        
        //I can initialize the states with the undesired values/ floor condition values
        int st1 = 1e4 + 1, st2 = 1e4 + 1;
        if(i<=n-1) st1 = solve(triangle, i+1, j, dp);
        if(i<=n-1) st2 = solve(triangle, i+1, j+1, dp);
        return dp[i][j] = triangle[i][j] + min(st1, st2);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return solve(triangle, 0, 0, dp);
    }
};