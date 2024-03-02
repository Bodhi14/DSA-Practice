        {
            if(min(disr[i], disb[i]) == 1e9)
                ans[i] = -1;
            else
                ans[i] = min(disr[i], disb[i]);
        }
        return ans;
    }
};
3
