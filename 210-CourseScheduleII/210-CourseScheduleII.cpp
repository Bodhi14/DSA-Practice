    }

    bool dfsCheck(int i, vector<int>& vis, vector<int>& pathVis, vector<int> Adj[]) {
        vis[i] = 1;
        pathVis[i] = 1;
        for(int x:Adj[i]) {
            if(!vis[x]) {
                if(dfsCheck(x, vis, pathVis, Adj)) return true;
            }
            else if(pathVis[x]) return true;
        }
2
