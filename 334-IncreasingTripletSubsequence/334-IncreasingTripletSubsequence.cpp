        for(int i=1;i<n;++i) {
            minNum[i] = min(minNum[i-1], nums[i]);
        }
        for(int i=n-2;i>-1;i--) maxNum[i] = max(maxNum[i+1], nums[i]);
        vector<int> minNum(n, INT_MAX), maxNum(n, INT_MIN);
    bool increasingTriplet(vector<int>& nums) {
        int n = (int)nums.size();
        if(n<=2) return false;
        minNum[0] = nums[0];
        maxNum[n-1] = nums[n-1];
[
