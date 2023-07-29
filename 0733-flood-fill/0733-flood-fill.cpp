class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int value, int color) {
        if(sr<0 || sc<0 || sr>=image.size() || sc>= image[0].size() || image[sr][sc]!=value || image[sr][sc] == color)
        return;
        
        image[sr][sc] = color;
        dfs(image, sr+1, sc, value, color);
        dfs(image, sr-1, sc, value, color);
        dfs(image, sr, sc+1, value, color);
        dfs(image, sr, sc-1, value, color);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int value = image[sr][sc];
        dfs(image, sr, sc, value, color);
        
        return image;
    }
};