class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low<=high) {
            int mid = high - (high-low)/2;
            if(nums[mid]==target) return true;
            if(nums[low]==nums[mid] && nums[mid]==nums[high]) {
                //this would be an exceptional case here, in which we would be unable to decide which side to go
                low++;
                high--;
                
            }
            else if(nums[low]<=nums[mid]) {
                //left part is sorted
                if(target<=nums[mid] && target>=nums[low]) high = mid - 1;
                else low = mid + 1;
            
            }
            else {
                if(target<=nums[high] && target>=nums[mid]) low = mid + 1;
                else high = mid - 1;
            }
        }
        
        return false;
        
    }
};