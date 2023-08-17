class Solution {
public:
    
    //trying out a bfs solution here
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       
       int n = mat.size();
       int m = mat[0].size();
       vector<vector<int>> distances(n, vector<int>(m, 0));
       queue<pair<pair<int, int>, int>> q;
       vector<vector<int>> vis(n , vector<int>(m, 0));
       for(int i=0;i<n;++i) {
           for(int j=0;j<m;++j) if(!mat[i][j]) {
               q.push({{i, j}, 0});
               vis[i][j] = 1;
           }
       }
       while(!q.empty()) {
           pair<pair<int, int>, int> curr = q.front();
           int x = curr.first.first;
           int y = curr.first.second;
           int dist = curr.second;
         
           distances[x][y] = dist;
           q.pop();
           if(x<n-1 && !vis[x+1][y]) {
               q.push({{x+1, y}, dist+1});
               vis[x+1][y] = 1;
           }
           if(x>0 && !vis[x-1][y]) {
               q.push({{x-1, y}, dist+1});
               vis[x-1][y] = 1;
           }
           if(y<m-1 && !vis[x][y+1]){ 
               q.push({{x, y+1}, dist+1});
               vis[x][y+1] = 1;
           }
           if(y>0 && !vis[x][y-1]) {
               q.push({{x, y-1}, dist+1});
               vis[x][y-1] = 1;
           }
       }
       return distances;
    }
};