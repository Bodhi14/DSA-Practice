class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        vector<int>ans;
        int i=0,j=0;
        int n=v.size(),m=v[0].size();
        vector<vector<int>> vis(n+1,vector<int>(m+1,0));
        while(ans.size()!=(n*m)){
            while(j<m){
                if(vis[i][j]){
                    break;
                }
                vis[i][j]=1;
                ans.push_back(v[i][j]);
                j++;
            }
            i++;
            j--;

            while(i<n){
                if(vis[i][j]){
                    break;
                }
                vis[i][j]=1;
                ans.push_back(v[i][j]);
                i++;
            }
            j--;
            i--;

            while(j>=0){
                if(vis[i][j]){
                    break;
                }

                vis[i][j]=1;
                ans.push_back(v[i][j]);
                j--;
            }
            i--;
            j++;

            while(i>=0){
                if(vis[i][j]){
                    break;
                }

                vis[i][j]=1;
                ans.push_back(v[i][j]);
                i--;
            }
            j++;
            i++;
        }
        return ans;
    }
};