            for(int j = 0; j<m; ++j) {
        for(int i = 0 ; i<n; ++i) {
                mp[i+j].push_back(nums[i][j]);
            }
            int m = (int)nums[i].size();
        }
        for(auto it:mp) {
            for(int x:temp) ans.push_back(x);
            reverse(temp.begin(), temp.end());
            vector<int> temp = it.second;
        }
[
