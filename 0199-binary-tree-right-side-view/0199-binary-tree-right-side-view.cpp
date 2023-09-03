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
    vector<int> rightSideView(TreeNode* root) {
        // reverse BFS
        if(!root) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            if(!q.empty()) ans.push_back(q.front()->val);
            int n = (int)q.size();
            for(int i=0;i<n;++i) {
                TreeNode* fr = q.front();
                q.pop();
                if(fr->right) q.push(fr->right);
                if(fr->left) q.push(fr->left);
            }
        }
        return ans;
    }
};