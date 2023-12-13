class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x:nums) {
            if(x>0) mp[x]++;
        }
        int i = 1;
        while(i) {
            if(mp.find(i)==mp.end()) return i;
            if(i==2e31-1) break;
            i++;
        }
        return i-1;
        }
};