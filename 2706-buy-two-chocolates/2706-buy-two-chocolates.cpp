class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = (int)prices.size();
        if(n<=1) return money;
        int ans = INT_MAX;
        sort(prices.begin(), prices.end());
        for(int i = 0; i<n-1; ++i) {
            for(int j = i+1; j<n; ++j) {
                if(prices[i]+prices[j] > money) continue;
                else ans = min(ans, (prices[i]+prices[j]));
            }
        }
        return ans==INT_MAX ? money : money-ans;
    }
};