                    fire[r][c] = 0;
                    q.push({r, c, 0});
        for(int r=0; r<R; ++r){
            for(int c=0; c<C; ++c){
                if(grid[r][c] == 1){
class Solution {
    int dir[5] = {-1, 0, 1, 0, -1};
public:
    int maximumMinutes(vector<vector<int>>& grid) {
        int R = grid.size(),
            C = grid[0].size();
        
        vector<vector<int>> fire(R, vector<int>(C, INT_MAX));
        queue<array<int, 3>> q;
[
