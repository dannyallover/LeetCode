# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isUnivalTree(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True

        q = []
        val = root.val
        q.append(root)
        while q:
            node = q.pop(0)
            if not node:
                continue

            if node.val != val:
                return False
            q.append(node.left)
            q.append(node.right)

        return True
