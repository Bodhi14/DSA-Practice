class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(),i=0,j=0,k,x=0;
        k = m*n;
        vector<int> ans;
        while(k){
            if(x){
                while(k&&j>=0&&i<m){
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                    k--;
                }
                if(i<m){
                    j++;
                }else{
                    i = m-1;
                    j += 2;
                }
            }else{
                while(k&&i>=0&&j<n){
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                    k--;
                }
                if(j<n){
                    i++;
                }else{
                    j = n-1;
                    i += 2;
                }
            }
            x ^= 1;
        }
        return ans;
    }
};