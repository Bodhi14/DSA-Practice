            if(arr[j]<=tgt) ans = min(ans, 1 + solve(j, arr, m, tgt-arr[j], dp));
        for(int j = i; j<m; ++j) {
        if(dp[tgt]!=-1) return dp[tgt];
        int ans = 1e7;
        if(i>=m || tgt==0) return 0;
        if(arr[i]>tgt) return 1e7;
    int solve(int i, vector<int>& arr, int m, int tgt, vector<int>& dp) {
private:
class Solution {
1
