class Solution {
public:
    void solve(string s, int ind, vector<string>& ans) {
        //base case
        if(ind==s.size()) {
            ans.push_back(s);
            return;
        }
        
        // converting the current character to upper case
        
        if((s[ind]>='a' && s[ind]<='z')) {
            char lc = s[ind];
            char uc = toupper(s[ind]);
            s[ind] = uc;
            solve(s, ind+1, ans);
            s[ind] = lc;
        }
        else if(s[ind]>='A' && s[ind]<='Z') {
            char uc = s[ind];
            char lc = tolower(s[ind]);
            s[ind] = lc;
            solve(s, ind+1, ans);
            s[ind] = uc;
        }
       
        
        // not converting the current character to upper case
        
        solve(s, ind+1, ans);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s, 0, ans);
        return ans;
    }
};