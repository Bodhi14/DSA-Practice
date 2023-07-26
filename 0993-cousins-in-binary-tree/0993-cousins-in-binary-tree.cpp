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
void dfs(TreeNode* root,int prevNodeValue, int currentDepth, int x, int y, int& depthX, int& parentX, int& depthY, int& parentY) {
    
    if(!root)
        return;

    
    if(root->val == x) {
        depthX = currentDepth; parentX = prevNodeValue;
        return;
    }

    
    if(root->val == y) {
        depthY = currentDepth; parentY = prevNodeValue;
        return;
    }

    dfs(root->left, root->val, currentDepth+1, x, y, depthX, parentX, depthY, parentY);
    dfs(root->right, root->val, currentDepth+1, x, y, depthX, parentX, depthY, parentY);
}


bool isCousins(TreeNode* root, int x, int y) {
   
    if(!root)
        return false;

    int depthX, parentX; 
    int depthY, parentY; 

    dfs(root, 0, 0, x, y, depthX, parentX, depthY, parentY);

    
    if(depthX == depthY && parentX != parentY)
        return true;
    else
        return false;
}
};