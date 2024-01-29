        else
        return dp[i][last]=find(s,i+1,k,last,dp);
    }
    int longestIdealString(string s, int k) {
        vector<vector<int>>dp(s.size(),vector<int>(27,-1));
        return find(s,0,k,26,dp);
    }
};
"acfgbd"
