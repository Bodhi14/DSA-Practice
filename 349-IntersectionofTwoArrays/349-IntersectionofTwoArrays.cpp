class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2;
        vector<int> ans;
        for(int x:nums1) s1.insert(x);
        for(int x:nums2) if(s1.find(x)!=s1.end()) s2.insert(x);
        for(auto it:s2) ans.push_back(it);
        return ans;
    }
};
[
