class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(string s:emails) {
            string curr = "";
            int i = 0;
            int n = s.size();
            while(s[i]!='@') {
                if(s[i]=='+') break;
                if(s[i]=='.') {
                    i++;
                    continue;
                }
                curr+=s[i];
                i++;
            }
            while(s[i]!='@') {
                i++;
            }
            while(i<n) {
                curr+=s[i];
                i++;
            }
            st.insert(curr);
        }
        int ans = (int)st.size();
        return ans;
    }
};