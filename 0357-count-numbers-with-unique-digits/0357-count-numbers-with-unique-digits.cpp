class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int> ans(n+1, -1);
        if(n==0) return 1;
        else if(n==1) return 10;
        else if(n==2) return 91;
        ans[0] = 1;
        ans[1] = 10;
        ans[2] = 91;
        vector<int> prod(n+1, 1);
        prod[2] = 81;
        for(int i=3;i<=n;++i) {
            prod[i] = prod[i-1]*(11-i);
            ans[i] = ans[i-1] + prod[i];
        }
        return ans[n];
    }
};