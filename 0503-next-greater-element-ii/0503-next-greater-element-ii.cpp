class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = (int)nums.size();
        stack<int> s;
        unordered_map<int, int> nge;
        
        for(int i=0;i<n;++i) {
            if(s.empty()) { 
                s.push(i);
                continue;
             }
            
            while(!s.empty() && nums[s.top()]<nums[i]) {
                nge[s.top()] = nums[i];
                s.pop();
            }
            
            s.push(i);
        }
        
        for(int i=0;i<n;++i) {
            if(nge.find(i)==nge.end()) {
                for(int j=0;j<i;++j) {
                    if(nums[j]>nums[i]){ 
                        nge[i] = nums[j];
                        break;
                    }
                }
            }
        }
        
        
        for(int i=0;i<n;++i) {
            if(nge.find(i)!=nge.end()) nums[i] = nge[i];
            else nums[i] = -1;
        }
        
        return nums;
    }
};