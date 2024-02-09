    int solve(int i, vector<int>& arr, int m, int tgt, vector<int>& dp) {
        if(i>=m || tgt==0) return 0;
        if(dp[tgt]!=-1) return dp[tgt];
        int ans = 1e7;
        for(int j = i; j<m; ++j) {
            if(arr[j]<=tgt) ans = min(ans, 1 + solve(j, arr, m, tgt-arr[j], dp));
        }
        return dp[tgt] = ans;
        if(arr[i]>tgt) return 1e7;
1
