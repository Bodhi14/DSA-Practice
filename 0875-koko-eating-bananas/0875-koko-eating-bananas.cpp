class Solution {
public:
    bool check(vector<int>& piles, int rate, int ceiling) {
        long long int ss = (int)piles.size();
        long long int hours = 0;
        for(long long int i = 0;i<ss;++i) {
            if(piles[i]<=rate) hours++;
            else {
                if(piles[i]%rate == 0) hours += piles[i]/rate;
                else hours += piles[i]/rate + 1;
            }
        }
        return (hours<=ceiling) ? true : false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int max_ele = INT_MIN;
        long long int n = piles.size();
        for(long long int x:piles) max_ele = max(max_ele, x);
        if(n > h) return -1;
        long long int i = 1, j = max_ele, ans = -1;
        while(i<=j) {
            long long int mid = i + (j-i)/2;
            if(check(piles, mid, h)) {
                ans = mid;
                j = mid - 1;
            }
            else i = mid + 1;
        }
        return ans;
    }
};