class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        //corner cases
        
        if(!roads.size()) return {};
        
        //end of corner cases
        int ans = 0;
        unordered_map<int, int> mp;
        set<pair<int, int>> s;
        vector<pair<int, int>> degrees;
        for(vector<int> v: roads) {
            s.insert({v[0], v[1]});
            mp[v[0]]++;
            mp[v[1]]++;
        }
        for(auto it:mp) {
            degrees.push_back({it.first, it.second}); 
        }
        int m = degrees.size();
        for(int i=0;i<m;++i) {
            int connection1 = degrees[i].second;
            for(int j=0;j<m;++j) {
                if(j==i) continue;
                int connection2 = degrees[j].second;
                int connections = connection1 + connection2;
                if(s.find({degrees[i].first, degrees[j].first})!=s.end() || s.find({degrees[j].first, degrees[i].first})!=s.end()) {
                    --connections;
                }
               
                ans = max(ans, connections);
            }
        }
        return ans;
        
        
    }
};