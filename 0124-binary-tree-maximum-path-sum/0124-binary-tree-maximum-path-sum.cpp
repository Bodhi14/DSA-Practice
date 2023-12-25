class Solution {
private:
    int maxPathSumHelper(TreeNode* root, int& maxSum) {
        if (!root) return 0;

        int leftMax = max(0, maxPathSumHelper(root->left, maxSum));
        int rightMax = max(0, maxPathSumHelper(root->right, maxSum));

        int nodeMax = root->val + max(leftMax, rightMax);
        maxSum = max(maxSum, root->val + leftMax + rightMax);

        return nodeMax;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathSumHelper(root, maxSum);
        return maxSum;
    }
};