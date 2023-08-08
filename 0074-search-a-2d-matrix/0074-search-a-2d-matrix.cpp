class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> merged;
        for(auto row:matrix) {
            for(int x:row) 
                merged.push_back(x);
        }
        
        int low = 0, high = merged.size() - 1;
        while(low<=high) {
            int mid = high - (high-low)/2;
            if(merged[mid]==target) return true;
            if(merged[mid]<target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};