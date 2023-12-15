class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> cities;
        for(auto v:paths) {
            cities[v[0]] = v[1];
        }
        string init = paths[0][0];
        while(cities.find(init)!=cities.end()) {
            init = cities[init];
        }
        return init;
    }
};