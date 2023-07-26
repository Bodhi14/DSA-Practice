/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> parent;
    void dfs(TreeNode* root, TreeNode* par, TreeNode* tgt, bool compReturn) {
        if(!root || compReturn) return;
        parent[root] = par;
        if(root==tgt) {
            compReturn = true;
            return;
        }
        dfs(root->left, root, tgt, compReturn);
        dfs(root->right, root, tgt, compReturn);
        return;
    } 
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        unordered_map<int, bool> vis;
        dfs(root, nullptr, p, false);
        dfs(root, nullptr, q, false);
        
        while(p) {
            vis[p->val] = true;
            p = parent[p];
        }
        while(q) {
            if(vis[q->val]) return q;
            q = parent[q];
        }
        return p;
        
            
    }
};