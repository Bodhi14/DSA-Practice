class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
        int i = 0, j = nums1.size();
        while(i<=j){
            int cut1 = (j-i)/2+i;
            int cut2 = (nums1.size()+nums2.size()+1)/2-cut1;
            int l1 = (cut1==0)?INT_MIN:nums1[cut1-1];
            int l2 = (cut2==0)?INT_MIN:nums2[cut2-1];
            int r1 = (cut1==nums1.size())?INT_MAX:nums1[cut1];
            int r2 = (cut2==nums2.size())?INT_MAX:nums2[cut2];
            if(l1<=r2&&l2<=r1){
                if((nums1.size()+nums2.size())&1){
                    return (double)max(l1,l2);
                }else {
                    return ((double(max(l1,l2)+min(r1,r2))))/2;
                }
            }else if(l1>r2){
                j = cut1-1;
            }else{
                i = cut1+1;
            }
        }
        return -1.0;
    }
};