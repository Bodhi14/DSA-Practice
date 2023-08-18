class Solution {
public:
    int solve(int ind1, int ind2, string &s1, string &s2, vector<vector<int>>& dp) {
        //base case
        if(ind1<0 || ind2<0) return 0;
        //end of base case
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        int take = 0, notTake = 0;
        //if the current characters match
        if(s1[ind1]==s2[ind2]) {
            take = 1 + solve(ind1-1, ind2-1, s1, s2, dp);
        }
        //if the current characters do not match
        else {
            notTake = max(solve(ind1-1, ind2, s1, s2, dp), solve(ind1, ind2-1, s1, s2, dp));
        }
        
        return dp[ind1][ind2] = max(take, notTake);
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        int ind1 = text1.size()-1;
        int ind2 = text2.size()-1;
        vector<vector<int>> dp(ind1+1, vector<int>(ind2+1, -1));
        return solve(ind1, ind2, text1, text2, dp);
    }
};