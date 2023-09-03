class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ind = 0;
        vector<int> dummy(nums.size(), 0);
        for(int x:nums)  {
            if(x!=val)  {
                dummy[ind++] = x;
            }
        }
        for(int i=0;i<nums.size();++i) nums[i] = dummy[i];
        return ind;
    }
};