        int ans_size = 1, ans_index = n-1;
        for(int i=n-2; i>=0; i--){
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> dp(n);
        dp[n-1] = {nums[n-1]};

[1,2,3]
