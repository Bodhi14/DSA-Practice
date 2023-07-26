/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, vector<int>& nums) {
        if(!root) return;
        nums.push_back(root->val);
        dfs(root->left, nums);
        dfs(root->right, nums);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        dfs(root, nums);
        unordered_map<int, int> mp;
        int n = (int)nums.size();
        for(int i=0;i<n;++i) {
            if(mp.find(k-nums[i])!=mp.end()) return true;
            mp[nums[i]]++;
        }
        return false;
    }
};