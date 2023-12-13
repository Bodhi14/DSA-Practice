class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        if(nums[0] > 0) return {};

        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]] = i;
        
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i] > 0) break;
            for(int j=i+1;j<nums.size()-1;j++){
                int target = -(nums[i] + nums[j]); 
                if(mp.find(target) != mp.end() && mp[target] > j){
                    ans.push_back({nums[i], nums[j], target});
                }
                
                j = mp[nums[j]];
            }
            i = mp[nums[i]];
        }
        return ans;
    }
    
};