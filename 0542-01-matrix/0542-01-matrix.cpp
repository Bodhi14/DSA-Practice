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
           
           int dx[] = {1, 0, -1, 0};
           int dy[] = {0, -1, 0, 1};
           for(int i=0;i<4;++i) {
               int row = x + dx[i];
               int col = y + dy[i];
               if(row<n && row>=0 && col<m && col>=0 && !vis[row][col]) {
                   q.push({{row, col}, dist+1});
                   vis[row][col] = 1;
               }
           }
       }
       return distances;
    }
};