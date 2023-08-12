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
        //vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        //return solve(0, 0, obstacleGrid, dp);
        
        //using tabulation method here
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> memory(n, vector<int>(m, 0));
        if(obstacleGrid[0][0]==1) return 0;
        memory[0][0] = 1;
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                if(i==0 && j==0) continue;
                if(obstacleGrid[i][j]) continue;
                
                int left = 0, up = 0;
                if(i>=1) up = memory[i-1][j];
                if(j>=1) left = memory[i][j-1];
                memory[i][j] = up + left;
            }
        }
        
                  
        return memory[n-1][m-1];
    }
};