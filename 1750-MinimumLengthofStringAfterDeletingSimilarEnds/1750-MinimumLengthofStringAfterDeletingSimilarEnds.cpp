    int minimumLength(string s) {
        int low = 0, high = n - 1;
        int n = (int)s.size();
        while(low<high) {
            while(s[low]==ch && low<(n-1)){
        }
                low++;
            }
            if(s[low]!=s[high]) return high-low+1;
        return (low==high) ? 1 : 0;
            char ch = s[low];
            while(s[high]==ch && high>0) high--;
    }
};
"
