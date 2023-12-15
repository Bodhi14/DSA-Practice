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
private:
    int minNode(TreeNode* root) {
        if(!root) return INT_MAX;
        return min(min(minNode(root->left), minNode(root->right)), root->val);
    }
    int maxNode(TreeNode* root) {
        if(!root) return INT_MIN;
        return max(max(maxNode(root->left), maxNode(root->right)), root->val);
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root || !(root->right || root->left)) return true;
        bool leftans = isValidBST(root->left);
        bool rightans = isValidBST(root->right);
        bool isLeftValid = true,  isRightValid = true;
        if(root->left) isLeftValid = root->val > root->left->val && root->val > maxNode(root->left);
        if(root->right) isRightValid = root->val < root->right->val && root->val < minNode(root->right);
        
        return leftans & rightans & (isLeftValid && isRightValid);
    }
};