
            else if(i + 'a' == 't') ans = (ans + solve(idx + 1, l, e, 1, n)) % mod;

            else {

                ans = (ans + solve(idx + 1, l, e, t, n)) % mod;
            }
        }

        return dp[idx][l][e][t] = ans;
    }
    
4
