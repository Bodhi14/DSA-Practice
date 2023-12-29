class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans, notPresent;
        unordered_map<int, int> freq, checker;
        multiset<int> s;
        for(int x:arr1) {
            freq[x]++;
        }
        
        for(int x:arr2) {
            if(freq.find(x)==freq.end()) {
                notPresent.push_back(x);
                continue;
            }
            while(freq[x]--) {
                ans.push_back(x);
            }
            checker[x]++;
        }
        for(auto it:arr1) if(checker.find(it)==checker.end()) s.insert(it);
        
        for(auto it:s) ans.push_back(it);
        
        return ans;
    }
};