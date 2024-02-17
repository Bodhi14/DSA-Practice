            
        }
        for (auto it:mp) { 
            capacity += it.second;
             mp[trips[i][1]] -= trips[i][0]; 
             mp[trips[i][2]] += trips[i][0];
            if (capacity < 0) return false;
        }
        for (int i = 0; i < trips.size(); ++i) {
        map<int, int> mp;
    bool carPooling(vector<vector<int>>& trips, int capacity) {
public:
[
