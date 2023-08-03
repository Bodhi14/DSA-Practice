class Solution {
public:
    void f(unordered_map<int, vector<char>>& mp, vector<string>& ans, string digits, int i, string& temp) {
        
        if(i==digits.size()) {
            ans.push_back(temp);
            return;
        }
        int num = digits[i] - '0';
        for(auto it:mp[num]) {
            temp+=it;
            f(mp, ans, digits, i+1, temp);
            temp.pop_back();
        }
        return;
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        unordered_map<int, vector<char>> mp;
        mp[2] = {'a', 'b', 'c'};
        mp[3] = {'d', 'e', 'f'};
        mp[4] = {'g', 'h', 'i'};
        mp[5] = {'j', 'k', 'l'};
        mp[6] = {'m', 'n', 'o'};
        mp[7] = {'p', 'q', 'r', 's'};
        mp[8] = {'t', 'u', 'v'};
        mp[9] = {'w','x', 'y', 'z'};
        string temp;
        if(!digits.size()) return {};
        f(mp, ans, digits, 0, temp);
        return ans;
    }
};