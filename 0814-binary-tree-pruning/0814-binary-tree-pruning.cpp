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
    
    bool pruneTreeModified(TreeNode* root) {
        if(!root) return false;
        
        bool leftTree = pruneTreeModified(root->left);
        bool rightTree = pruneTreeModified(root->right);
        
        if(!leftTree) {
            root->left = nullptr;
        }
        if(!rightTree) {
            root->right = nullptr;
        }

        return root->val == 1 || leftTree || rightTree;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
    
        pruneTreeModified(root);
        if(!root->left && !root->right && !root->val) return nullptr;
        return root;
    }
};