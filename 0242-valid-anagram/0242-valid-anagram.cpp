class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag = true;
        unordered_map<char, int> mp1, mp2;
        for(char c:s) mp1[c]++;
        for(char c:t) mp2[c]++;
        for(auto it:mp1) {
            if(mp2[it.first]!=mp1[it.first]) flag = false;
        }
        return flag & (s.size() == t.size());
    }
};