public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp = heights;
        sort(exp.begin(),exp.end());
        int n = (int)heights.size();
        int ans = 0;
        for(int i=0;i<n;++i) if(heights[i]!=exp[i]) ans++;
        return ans;
    }
[
