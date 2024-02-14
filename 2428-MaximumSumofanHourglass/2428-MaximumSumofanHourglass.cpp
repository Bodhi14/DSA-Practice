        int n = (int)grid.size();
        int m = (int)grid[0].size();
public:
    int maxSum(vector<vector<int>>& grid) {
        int sum, ans = INT_MIN;
        for(int i = 1; i<n-1; ++i) {
            sum = 0;
            for(int j = 1; j<m-1; ++j) {
                sum=grid[i-1][j-1] + grid[i-1][j] + grid[i-1][j+1] + grid[i][j] + grid[i+1][j-1] + grid[i+1][j] + grid[i+1][j+1];
                ans = max(ans, sum);
            }
[
