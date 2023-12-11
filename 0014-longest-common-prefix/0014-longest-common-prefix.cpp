class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        int mincnt = INT_MAX;
        string ans;
        for(int i=1;i<strs.size();++i) {
            int cnt = 0;
            for(int j=0;j<strs[i].size();++j) {
                
                if(strs[i][j]==strs[0][j]) {
                    cnt++; 
                }
                else 
                break;
            }
                if(mincnt>cnt) { 
                    mincnt = cnt;
            }
        }
        return strs[0].substr(0, mincnt);
    }
};