class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(string str: strs) {
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
        for(auto& it: mp) {
            vector<string> v;
            for(string ss: it.second) {
                v.push_back(ss);
            }
            ans.push_back(v);
        }
        return ans;
    }
};