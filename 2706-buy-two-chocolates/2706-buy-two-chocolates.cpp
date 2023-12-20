class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
         int n = (int)prices.size();
         sort(prices.begin(), prices.end());
         int AmountLeft;
         for(int i=1;i<n;++i) {
             AmountLeft = money-prices[i]-prices[i-1];
             if(AmountLeft>=0) return AmountLeft;
         }
         return money;
    }
};