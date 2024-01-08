class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> up(n, vector<int>(n, 0)), down(n, vector<int>(n, 0)), left(n, vector<int>(n, 0)), right(n, vector<int>(n, 0));

        unordered_map<int, unordered_map<int,int>> mp;
        for(auto &p : mines)
        mp[p[0]][p[1]]++;
        for(int j = 0; j < n; j++){
            for(int i = 0; i < n; i++){
                if(mp[i].find(j) != mp[i].end())
                    up[i][j] = 0;
                else if(i == 0)
                    up[i][j] = 1;
                else
                    up[i][j] = 1 + up[i - 1][j];
            }
        }

        for(int j = 0; j < n; j++){
            for(int i = n - 1; i >= 0; i--){
                if(mp[i].find(j) != mp[i].end())
                    down[i][j] = 0;
                else if(i == n - 1)
                    down[i][j] = 1;
                else
                    down[i][j] = 1 + down[i + 1][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mp[i].find(j) != mp[i].end())
                    left[i][j] = 0;
                else if(j == 0)
                    left[i][j] = 1;
                else
                    left[i][j] = 1 + left[i][j - 1];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = n - 1; j >= 0; j--){
                if(mp[i].find(j) != mp[i].end())
                    right[i][j] = 0;
                else if(j == n - 1)
                    right[i][j] = 1;
                else
                    right[i][j] = 1 + right[i][j + 1];
            }
        }


        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                res = max(res, min(left[i][j], min(right[i][j], min(up[i][j], down[i][j]))));
            }
        }
        return res;
    }
};