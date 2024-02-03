    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, n, target, 0, 0, temp, ans);
        return ans;
    }
};
[
