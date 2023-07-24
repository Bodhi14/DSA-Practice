class Solution {
public:
    double myPow(double x, int m) {
        double num = 1;
        long long n = m;
        if(!n) return (double)1;
        bool flag=false;
        if(n<0) {
            n*=-1;
            flag = true;
        };
        while(n>0) {
            if(n%2==0) {
                x *= x;
                n /= 2;
            }
            else {
                num *= x;
                n--;
            }
        }
        if(flag) {
            return (1.0)/num;
        }
        return num;

    }
};