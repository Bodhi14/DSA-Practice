# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pruneTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def solve(root):
            if not root: return False
            left = solve(root.left)
            right = solve(root.right)
            if not left: 
                root.left = None
            if not right:
                root.right = None
            return root.val == 1 or left or right
        
        solve(root)
        if not root or (root.left == root.right == None and root.val == 0): return None
        return root