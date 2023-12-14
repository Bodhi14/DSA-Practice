class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<int> onesRow(n, 0), onesCol(m, 0);
        for(int i = 0; i<n; ++i) {
            for(int j = 0; j<m; ++j) if(grid[i][j] == 1) onesRow[i]++;
        }
        for(int i = 0; i<m; ++i) {
            for(int j = 0; j<n; ++j) if(grid[j][i] == 1) onesCol[i]++;
        }
        for(int i = 0; i<n; ++i) {
            for(int j = 0; j<m; ++j) {
                ans[i][j] = onesRow[i] + onesCol[j] - (m - onesRow[i]) - (n - onesCol[j]);
            }
        }
        return ans;
    }
};