# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def dfs(self, root, leaves):
        if not root:
            return
        if not root.left and not root.right:
            leaves.append(root.val)
        self.dfs(root.left, leaves)
        self.dfs(root.right, leaves)
        return

    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        leaves_1 = []
        leaves_2 = []
        self.dfs(root1, leaves_1)
        self.dfs(root2, leaves_2)
        return leaves_1 == leaves_2
