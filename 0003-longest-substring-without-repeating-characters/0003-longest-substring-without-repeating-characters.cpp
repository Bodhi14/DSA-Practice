class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int ans = 1;
        int l=0, r=0;
        if(s=="") return 0;
        while(l<=r && r<=s.size()-1) {
            if(mp.find(s[r])==mp.end()) {
                mp[s[r]]++;
            }
            else {
                while(l<r && s[l]!=s[r]) {
                    mp.erase(s[l]);
                    l++;
                }
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};