class Solution {
public:
    int max(int a, int b) {
        if(a<b) return b;
        return a;
    }
    int solve(int i, int j, vector<vector<int>> obstacleGrid, vector<vector<int>>& dp) {
        //base case
        if(i<0 || j<0 || i>=obstacleGrid.size() || j>=obstacleGrid[0].size() || obstacleGrid[i][j]) return 0; 
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==obstacleGrid.size()-1 && j==obstacleGrid[0].size()-1) return 1;
        
        //states
        int ways = 0;
        int down = solve(i+1, j, obstacleGrid, dp);
        int right = solve(i, j+1, obstacleGrid, dp);
        
        ways = right + down;
        
        return dp[i][j] = ways;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        return solve(0, 0, obstacleGrid, dp);
    }
};