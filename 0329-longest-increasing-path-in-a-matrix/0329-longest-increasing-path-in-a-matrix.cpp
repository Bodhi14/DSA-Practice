class Solution {
private:
    int solve(vector<vector<int>>& matrix, int i, int n, int j, int m, vector<vector<int>>& dp) {
        if(i<0 || i>=n || j<0 || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int curr = matrix[i][j];
        int right = 0, left = 0, top = 0, down = 0;
        if(j<m-1 && matrix[i][j+1]>curr) right = solve(matrix, i, n, j+1, m, dp);
        if(j>=1 && matrix[i][j-1]>curr) left = solve(matrix, i, n, j-1, m, dp);
        if(i<n-1 && matrix[i+1][j]>curr) down = solve(matrix, i+1, n, j, m, dp);
        if(i>=1 && matrix[i-1][j]>curr) top = solve(matrix, i-1, n, j, m, dp);
        return dp[i][j] = 1 + max(max(right, left), max(down, top));
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = (int)matrix.size();
        int m = (int)matrix[0].size();
        int ans = 0;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        for(int i = 0; i<n; ++i) {
            for(int j = 0; j<m; ++j) 
                if(dp[i][j]==-1) ans = max(ans, solve(matrix, i, n, j, m, dp));
                else ans = max(ans, dp[i][j]);
        }
        return ans;
    }
};