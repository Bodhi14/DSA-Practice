        int sum = 0, ans = 0;
        for(int i = 0; i<n; ++i) {
            if(nums[i]==1) sum++;
            else sum--;
            if(mp.find(sum)!=mp.end()) {
                ans = max(ans, i - mp[sum]);
            }
            else mp[sum] = i;
        }
        mp[0] = -1;
        unordered_map<int, int> mp;
        int n = (int)nums.size();
    int findMaxLength(vector<int>& nums) {
public:
[0,1]
