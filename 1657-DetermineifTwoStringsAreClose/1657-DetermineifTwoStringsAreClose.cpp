    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> mp1, mp2;
        for(char& ch:word1) mp1[ch]++;
        for(char& ch:word2) mp2[ch]++;
        multiset<char> s1, s2;
        for(auto it:mp1) s1.insert(it.second);
        for(auto it:mp2) s2.insert(it.second);
        return s1 == s2;
public:
class Solution {
        for(auto it:mp1) {
            if(mp2.find(it.first)==mp2.end()) return false;
        }
    }
"
