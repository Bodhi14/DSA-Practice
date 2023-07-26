/*
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
    pair<TreeNode*, int> dfs(TreeNode* root, int& Ans) {
        if(!root) return {nullptr, 0};
        
        pair<TreeNode*, int> leftTree = dfs(root->left, Ans);
        pair<TreeNode*, int> rightTree = dfs(root->right, Ans);
        
        int leftHeight = 0, rightHeight = 0;
        if(root->left && root->val == leftTree.first->val) leftHeight = 1 +  leftTree.second;
        if(root->right && root->val == rightTree.first->val) rightHeight = 1 + rightTree.second;
        
        Ans = max(Ans, (leftHeight+rightHeight));
        return {root, max(leftHeight, rightHeight)};
    }
    
    int longestUnivaluePath(TreeNode* root) {
        int Ans = 0;
        dfs(root, Ans);
        return Ans;
    }
};