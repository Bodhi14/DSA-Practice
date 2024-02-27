public:
    int diameterOfBinaryTree(TreeNode* root) {
        return max(max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)), height(root->left)+height(root->right));
        return max(height(root->left), height(root->right)) + 1;
    }
    }
        if(!root) return 0;
        if(!root) return 0;
};
[
