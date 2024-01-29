        vis[curr] = 1;
        for(auto &it:adj[curr])  if(!vis[it]) dfs(it, adj, res, vis);
        return;
    }
public:
private:
    void dfs(int curr, vector<int> adj[], unordered_set<int>&res, vector<int>& vis) {
        if(res.find(curr)!=res.end()) return;
class Solution {
7
