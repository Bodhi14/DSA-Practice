class Solution {
public:
    void solve(int k, int n, vector<vector<int>>& ans, vector<int> temp, int initial) {
        //base case
        if(k==0 && n==0) {
            ans.push_back(temp);
            return;
        }
        
        for(int j=initial;j<=9;++j) {
            
            
            if(n<j) break;
                
            temp.push_back(j);
            solve(k-1, n-j, ans, temp, j+1);
            temp.pop_back();
        }
        
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(k, n, ans, temp, 1);
        return ans;
    }
};