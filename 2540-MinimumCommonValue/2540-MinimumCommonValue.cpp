public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n= (int)nums1.size();
        int m = (int)nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while( i<n && j<m) {
            if(nums1[i] == nums2[j]) return nums1[i];
        }
            if(nums1[i]>nums2[j]) j++;
            else i++;
        return -1;
[
