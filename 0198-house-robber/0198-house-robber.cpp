class Solution {
private:
    int solve(vector<int>& nums, int ind, vector<int>& dp) {
        if(ind>=nums.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];
        //if the robber robs from the house
        
        int rob = nums[ind] + solve(nums, ind+2, dp);
        
        //if the robber does not rob from the house
        
        int does_not_rob = solve(nums, ind+1, dp);
        
        return dp[ind] = max(rob, does_not_rob);
    }
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
        return solve(nums, 0, dp);
    }
};