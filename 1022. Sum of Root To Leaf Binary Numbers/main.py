# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def dfs(self, node, curr):
        curr += str(node.val)

        if not node.left and not node.right:
            return int(curr, 2)

        if node.left and not node.right:
            return self.dfs(node.left, curr)
        elif not node.left and node.right:
            return self.dfs(node.right, curr)

        return self.dfs(node.left, curr) + self.dfs(node.right, curr)

    def sumRootToLeaf(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        return self.dfs(root, '')
