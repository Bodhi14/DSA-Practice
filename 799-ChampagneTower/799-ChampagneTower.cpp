
        if(right < 0)
            right = 0;
        return dp[row][glass] = left + right;
    }
    double champagneTower(int poured, int query_row, int query_glass) {
        dp = vector<vector<double>>(query_row+1,vector<double>(query_glass+1,-1));
        return min(solve(poured,query_row,query_glass),1.00);
    }
};
1
