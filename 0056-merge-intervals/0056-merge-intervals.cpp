//Two pointer approach

class Solution {
private:
    static bool comp(vector<int>& v1, vector<int>& v2) {
        return v1[0]<v2[0];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         vector<vector<int>> ans;
         sort(intervals.begin(), intervals.end(), comp);
         int st = intervals[0][0];
         int end = intervals[0][1];
         for(int i = 1; i<intervals.size();++i) {
             if(end>=intervals[i][0] && end<intervals[i][1]) end = intervals[i][1];
             else if(end<intervals[i][0]) {
                 // creation of a vector, and pushing that to the ans 2D vector
                 vector<int> subAns;
                 subAns.push_back(st);
                 subAns.push_back(end);
                 ans.push_back(subAns);
                 st = intervals[i][0];
                 end = intervals[i][1];
             }
         }
         vector<int> subAns;
         subAns.push_back(st);
         subAns.push_back(end);
         ans.push_back(subAns);
         return ans;
    }
};