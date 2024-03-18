        int ans = 1, end = points[0][1];
        for(int i = 1; i<n; ++i) {
            if(points[i][0] > end) {
                end = points[i][1];
                ans++;
            }
            else end = min(end, points[i][1]);
        }
        return ans;
        sort(points.begin(), points.end());
        int n = (int)points.size();
    int findMinArrowShots(vector<vector<int>>& points) {
public:
class Solution {
[
