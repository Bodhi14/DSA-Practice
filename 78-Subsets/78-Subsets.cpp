class Solution {
public:
    void solve(vector<int>& nums, int ind, vector<int>& temp, vector<vector<int>>& ans) {
        if(ind>=nums.size()){ 
            ans.push_back(temp);
            return;
        }
        solve(nums, ind+1, temp, ans);
        
        temp.push_back(nums[ind]);
[1,2,3]
