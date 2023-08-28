class Solution {
public:
    int solve(vector<int>& nums, int ind, int prev_num, vector<vector<int>>& dp) {
        //base case
        if(ind>=nums.size()) return 0;
        //end of the base case
        
        //memoization
        if(dp[ind][prev_num + 1e4 + 1]!=-1) return dp[ind][prev_num + 1e4 + 1];
        //end of memoization
        int take = 0, NotTake = 0;
        if(nums[ind]>prev_num) take = 1 + solve(nums, ind+1, nums[ind], dp);
        
        NotTake = solve(nums, ind+1, prev_num, dp);
        return dp[ind][prev_num + 1e4 + 1] =  max(take, NotTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = (int)nums.size();
        vector<vector<int>> dp(n+1, vector<int>(2*1e4 + 1, -1));
        return solve(nums, 0, -1e4-1, dp);
    }
};