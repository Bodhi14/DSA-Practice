class Solution {
private:
    void solve(vector<int>& candidates, int n, int target, int i, int sum, vector<int>& temp, vector<vector<int>>& ans) {
        if(i>=n || sum>target) return;
        if(sum==target) {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<n;++j) {
        sum+=candidates[j];
[2,3,6,7]
