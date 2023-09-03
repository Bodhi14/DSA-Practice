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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            double sum = 0.00;
            int n = q.size();
            for(int i=0;i<n;++i) {
                TreeNode* fr = q.front();
                sum += fr->val;
                q.pop();
                if(fr->left) q.push(fr->left);
                if(fr->right) q.push(fr->right);
            }
            double val = (double)(sum)/ (double)n;
            ans.push_back(val);
        }
        return ans;
    }
};