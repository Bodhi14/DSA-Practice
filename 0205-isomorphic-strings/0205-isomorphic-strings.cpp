class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> mp1;
        if(s==t){
            return true;
        }
        for(int i=0;i<s.size();++i) {

            if(mp.find(s[i])==mp.end()){
                if(mp1.count(t[i])){
                    return false;
                }
                mp[s[i]] = t[i];
                mp1[t[i]] = s[i];
            }
            else{
                if(t[i]!=mp[s[i]]){
                    return false;
                }
            }
        }
        return true;
    }
};