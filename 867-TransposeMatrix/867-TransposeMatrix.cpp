        for(int i = 0; i<n; ++i) {
            for(int j = 0; j<m; ++j) {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
        vector<vector<int>> ans(m, vector<int>(n, 0));
        int m = (int)matrix[0].size();
        int n = (int)matrix.size();
[
