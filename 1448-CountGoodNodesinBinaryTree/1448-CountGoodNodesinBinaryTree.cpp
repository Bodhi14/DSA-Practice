    int dfs(TreeNode* curr, int maxTillNow) {
        if(!curr) return 0;
        int GoodNodes = 0;
        if(curr->val >= maxTillNow) GoodNodes = 1; // Found another Good Node.
        maxTillNow = max(maxTillNow, curr->val);
        GoodNodes += dfs(curr->left, maxTillNow);
        GoodNodes += dfs(curr->right, maxTillNow);
        return GoodNodes;
    }
[
