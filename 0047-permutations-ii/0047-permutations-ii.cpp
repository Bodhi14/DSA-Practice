class Solution {
public:
    void solve(vector<int> nums, int i, vector<int> temp, set<vector<int>>& ans, unordered_set<string> s) {
        //base case
        if(i==nums.size()) {
            ans.insert(nums);
            return;
        }
        
        for(int j=i;j<nums.size();++j) {
            if(j!=i && nums[i]==nums[j]) continue;
            
            swap(nums[i], nums[j]);
            solve(nums, i+1, temp, ans, s);
            swap(nums[i], nums[j]);
        } 
        
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> res;
        vector<int> temp;
        unordered_set<string> s;
        solve(nums, 0, temp, ans, s);
        for(vector<int> v: ans) {
            res.push_back(v);
        }
        return res;
    }
    // In the reurrence tree, after swapping within the recursion calls, sometimes, duplicacy odf a previously occured/existing list is found, because of which we need to first store it ion a set
};