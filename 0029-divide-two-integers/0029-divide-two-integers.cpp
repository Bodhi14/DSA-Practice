class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        else if(divisor == -1) return -1*(1LL*dividend);
        else if(divisor == 1) return 1LL*dividend;
        int ans = 0;
        bool neg = false;
        
        if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) neg = true;
        long long Dividend = abs(dividend);
        long long Divisor = abs(divisor);
        
        while(Dividend>=Divisor) {
            ans++;
            Dividend -= Divisor;
        }
        return neg ? (-1*ans) : ans;
    }
};