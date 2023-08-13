class Solution {
public:
    bool solve(vector<int>&nums, int ind, vector<int>&dp) {
        //base case
        if(ind==nums.size()) return true;
        if(dp[ind]!=-1) return dp[ind];
        //state 1
        if(ind<nums.size()-1 && nums[ind]==nums[ind+1])
        {
            if(solve(nums, ind+2, dp)) return dp[ind] = true;
        }
        
        // state 2
        if(ind<nums.size()-2 && (nums[ind]==nums[ind+1]&& nums[ind+1]==nums[ind+2]))
        {
            if(solve(nums, ind+3, dp)) return dp[ind] = true;
        }
        //state 3
        if(ind<nums.size()-2 && (nums[ind]==(nums[ind+1]-1) && nums[ind]==(nums[ind+2]-2))) {
            if(solve(nums, ind+3, dp)) return dp[ind] = true;
        }
           
        return dp[ind] = false;
    }
    bool validPartition(vector<int>& nums) {
        // [4,4,4,5,6]
        vector<int> dp(nums.size()+1, -1);
        return solve(nums, 0, dp);
    }
};