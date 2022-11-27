# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def pre_order(node: Optional[TreeNode], vals: List[int]):
            if not node:
                return vals
            vals.append(node.val)
            if node.left:
                pre_order(node.left, vals)
            if node.right:
                pre_order(node.right, vals)
            return vals
        return pre_order(root, [])
