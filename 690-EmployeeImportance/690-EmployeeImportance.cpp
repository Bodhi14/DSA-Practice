    }
    
    int dfs(int id)
    {
        int ans= m[id]->importance;
        for(int subs: m[id]->subordinates)
        {
            ans+=dfs(subs);
        }
        return ans;
    }
};
[[1,5,[2,3]],[2,3,[]],[3,3,[]]]
