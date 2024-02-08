        vector<pair<int, int>> v;
        unordered_map<int, int> mp;
        for(auto &it:mp) v.push_back({it.first, it.second});
        for(int x:arr) mp[x]++;
        sort(v.begin(), v.end(), comp);
        int m = v.size();
        int cnt = 0, n = (int)arr.size();
        int newSize = n;
        for(int i = 0 ; i<m; ++i) {
            if(newSize>n/2){
[
