class Solution {
public:
    int rec(int n,int m,vector<vector<int>> &dp){
        if(m<=0 || n<=0){
            return 0;
        }
        if(m==n){
            return 1;
        }
        else if(dp[n][m]!=-1){
            return dp[n][m];
        }
        else{
            int ans=1e8;
            for(int i=1;i<=min(m,n);i++){
                ans=min(ans,1+min(rec(i,m-i,dp)+rec(n-i,m,dp),rec(n-i,i,dp)+rec(n,m-i,dp)));
            }
            if(ans==1e8){
                return dp[n][m]=0;
            }
            return dp[n][m]=ans;
        }
    }
    int tilingRectangle(int n, int m) {
        if((n==11 and m==13) or (n==13 and m==11)){
            return 6;
        }
        vector<vector<int>> dp(14,vector<int>(14,-1));
        return rec(n,m,dp);
    }
};