class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(n, nums[0]);
        int n = (int)nums.size();
        for(int i = 1; i<n; ++i) {
            ans[i] = nums[i] + ans[i-1];
        }
    }
        return ans;
[
