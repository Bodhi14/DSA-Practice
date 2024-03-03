        int j = 0;
        int count = 0;
class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& b, vector<int>& p, int c) {
        int n = (int)b.size();
        int m = (int)p.size();
        sort(b.begin(),b.end());
        sort(p.begin(), p.end());
        unordered_map<int,int> mp;
        for(auto it: p){
            mp[it]++;
        }
        int i = 0;
[
