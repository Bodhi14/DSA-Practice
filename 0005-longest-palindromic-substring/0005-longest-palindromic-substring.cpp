class Solution {
public:
    string longestPalindrome(string s) {
        string ans = " ";
        int n = s.size();
        if(n==1) return s;
        int maxLen = INT_MIN;
        for(int i=0;i<n-1;++i) {
          
        int l = i, r = i;
        while(l>=0 && r<n && s[l]==s[r]) {
              if(maxLen<(r-l+1)) {
                maxLen = r-l+1;
                ans = s.substr(l, r-l+1);
              }
              l--;
              r++;
        }
        l = i; r = i+1;
        while(l>=0 && r<n && s[l]==s[r]) {
          if(maxLen<(r-l+1)) {
              maxLen = r-l+1;
              ans = s.substr(l, r-l+1);
          }
              l--;
              r++;
        }
        }
      return ans;
        }
};