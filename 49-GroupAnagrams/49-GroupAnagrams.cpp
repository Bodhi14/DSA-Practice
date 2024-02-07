            string newStr = str;
            sort(newStr.begin(), newStr.end());
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for(string str: strs) {
            mp[newStr].push_back(str);
        }
        for(auto &it:mp) {
            vector<string> temp;
            for(string curr: it.second) temp.push_back(curr);
[
