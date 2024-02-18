        for(int i = 0; i<n; ++i) {
            if(!vis[i]) {
                ans++;
                dfs(i, Adj, vis);
            }
        }
        return ans;
    }
};
        vector<int> vis(n, 0);
        }
[
