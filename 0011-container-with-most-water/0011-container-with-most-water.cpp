class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j = height.size() - 1;
        int ans = 0;
        while(i<j) {
            ans = max(min(height[j],height[i])*(j-i), ans);
            if(height[j]>height[i])
            i++;
            else
            j--;
        }
        return ans;
    }
};