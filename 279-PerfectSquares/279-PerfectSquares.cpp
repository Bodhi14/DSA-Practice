        }
        for(int j = 0; j<m; ++j) {
            if(arr[j]<=tgt) ans = min(ans, 1 + solve(arr, m, tgt-arr[j], dp));
    int solve(vector<int>& arr, int m, int tgt, vector<int>& dp) {
        if(tgt==0) return 0;
        if(dp[tgt]!=-1) return dp[tgt];
        int ans = 1e7;
        return dp[tgt] = ans;
private:
class Solution {
1
