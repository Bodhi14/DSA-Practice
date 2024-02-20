        if(dp[idx][l][e][t] != -1) return dp[idx][l][e][t];

        int ans = 0;

        for(int i = 0; i < 26; i++) {

            if(i + 'a' == 'l') ans = (ans + solve(idx + 1, 1, e, t, n)) % mod;

            else if(i + 'a' == 'e') ans = (ans + solve(idx + 1, l, min(e + 1, 2), t, n)) % mod;

            else if(i + 'a' == 't') ans = (ans + solve(idx + 1, l, e, 1, n)) % mod;

            else {
4
