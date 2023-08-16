class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;

        multiset<int> s;
        
        int n = nums.size();
        
        for(int i=0;i<k-1;++i) {
            s.insert(nums[i]);
        }
        for(int i = k-1;i<n;++i) {
            s.insert(nums[i]);
            ans.push_back(*s.rbegin());
            s.erase(s.find(nums[i-k+1]));
        }

        return ans;
    }
};