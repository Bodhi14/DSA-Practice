            if(s[i]!=s[i-1]) {
                ans += min(prev, curr);
                prev = curr;
        for(int  i = 1; i<n; ++i) {
class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.size();
        int prev = 0, curr = 1, ans = 0;
"
