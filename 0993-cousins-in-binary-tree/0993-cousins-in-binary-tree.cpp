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
    unordered_map<int, int> parent;
    
    bool isSameDepth(TreeNode* root, int node1, int node2) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            bool found1 = false, found2 = false;
            for(int i=0;i<n;++i) {
                TreeNode* fr = q.front();
                q.pop();
                if(fr->left) {
                q.push(fr->left);
                if(fr->left->val==node1) found1 = true;
                else if(fr->left->val==node2) found2 = true;
                }
                if(fr->right) 
                {
                q.push(fr->right);
                if(fr->right->val==node1) found1 = true;
                else if(fr->right->val==node2) found2 = true;
                }
                if(found1 && found2) return true;
            }
        }
        return false;
    }
    void dfs(TreeNode* root, int par) {
        if(!root) return;
        parent[root->val] = par;
        dfs(root->left, root->val);
        dfs(root->right, root->val);
        return;
    }
    bool isCousins(TreeNode* root, int x, int y) {
         dfs(root, 0);
         cout<<isSameDepth(root, x, y);
         return (parent[x]!=parent[y] && isSameDepth(root, x, y));
    }
};