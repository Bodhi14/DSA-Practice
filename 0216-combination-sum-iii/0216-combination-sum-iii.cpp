class Solution {
public:
    void solve(int k, int n, vector<vector<int>>& ans, vector<int> temp, vector<int> nums, int initial) {
        //base case
        if(k==0 && n==0) {
            ans.push_back(temp);
            return;
        }
        
        for(int j=initial;j<nums.size();++j) {
            if(j>initial && nums[j]==nums[j-1]) continue;
            
            if(nums[j]>n) break;
                
            temp.push_back(nums[j]);
            solve(k-1, n-nums[j], ans, temp, nums, j+1);
            temp.pop_back();
        }
        
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<vector<int>> ans;
        vector<int> temp;
        solve(k, n, ans, temp, nums, 0);
        return ans;
    }
};