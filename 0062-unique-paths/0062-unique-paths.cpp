class Solution {
    private:
    long long ncr(int n, int r) {
       if(r>n) return 0;
        long long ans = 1;
        for(long long i=1;i<=min(r, n-r);i++) {
            ans = ans*(n-i+1)/i;
        }
        return ans;
    }
    public:
        
        int uniquePaths(int m, int n) {
            m--;
            n--;
            return (int)ncr(m+n, n);
        }
};