class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size(), m = nums1.size();
        stack<int> s;
        unordered_map<int, int> nge;

        for(int i = 0; i<n; ++i) {

            if(s.empty()) {
                s.push(nums2[i]);
                continue;
            }
            while(!s.empty() && s.top()<=nums2[i]) {
                nge[s.top()] = nums2[i];
                s.pop();
            }

            s.push(nums2[i]);
        }
        
        for(int i = 0; i<m; ++i) {
            if(nge.find(nums1[i])!=nge.end())
            nums1[i] = nge[nums1[i]];
            else
            nums1[i] = -1;
        }

        return nums1;
    }
};