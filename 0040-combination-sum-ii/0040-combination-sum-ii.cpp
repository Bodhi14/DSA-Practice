class Solution {
public:
    void solve(int i, vector<int>candidates, int target, vector<vector<int>>&ans, vector<int> temp) {
        
        if(!target) {
        ans.push_back(temp);
        return;
    }
        //exploring all Take and Not Take by using a for loop
        for(int j=i;j<candidates.size();++j) {
            if(j>i && candidates[j]==candidates[j-1]) continue;
            
            if(candidates[j]>target) break; //as the candidates vector is sorted, we won't find any further results (suitable) too
            
            temp.push_back(candidates[j]);
            solve(j+1, candidates, target-candidates[j], ans, temp);
            temp.pop_back();
        }
        
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, candidates, target, ans, temp);
       
        return ans;
    }
};