class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        int n = (int)s.size();
        int m = (int)t.size();
        for(int i = 0; i<n; ++i) {
            if(st1.empty()) {
                if(s[i]!='#') st1.push(s[i]);
                continue;
            }
            if(s[i]=='#') {
                st1.pop();
                continue;
            }
            st1.push(s[i]);
        }
        
        for(int i = 0; i<m; ++i) {
            if(st2.empty()) {
                if(t[i]!='#') st2.push(t[i]);
                continue;
            }
            if(t[i]=='#') {
                st2.pop();
                continue;
            }
            st2.push(t[i]);
        }
        return st1 == st2;
    }
};