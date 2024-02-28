        while(!q.empty()) {
        q.push(root);
            int n = (int)q.size();
            for(int i = 0; i<n; ++i) {
                if(fr->right) q.push(fr->right);
                if(fr->left) q.push(fr->left);
            }
        }
        return ans;
                TreeNode* fr = q.front();
                ans = fr->val;
                q.pop();
[
