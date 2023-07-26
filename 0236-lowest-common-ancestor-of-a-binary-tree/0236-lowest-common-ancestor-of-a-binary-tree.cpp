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
    void dfs(TreeNode* root, TreeNode* par) {
        if(!root) return;
        parent[root] = par;
        dfs(root->left, root);
        dfs(root->right, root);
        return;
    } 
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        unordered_map<int, bool> vis;
        dfs(root, nullptr);
        
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