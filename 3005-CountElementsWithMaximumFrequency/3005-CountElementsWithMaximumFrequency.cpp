class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0, maxFreq = INT_MIN;
        for(int x:nums) {
            mp[x]++;
            maxFreq = max(maxFreq, mp[x]);
        }
        for(auto &it:mp) if(it.second==maxFreq) ans+=it.second;
        return ans;
    }
};
[1,2,2,3,1,4]
