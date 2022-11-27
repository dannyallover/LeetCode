# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        queue = []
        queue.append((root, False))
        total = 0
        while queue:
            node, t_val = queue.pop(0)
            if node.left:
                queue.append((node.left, True))
            if node.right:
                queue.append((node.right, False))
            if not node.left and not node.right and t_val:
                total += node.val
        return total
