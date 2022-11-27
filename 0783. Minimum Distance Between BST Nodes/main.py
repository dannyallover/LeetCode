# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def in_order(self, root, a):
        if not root:
            return

        self.in_order(root.left, a)
        a.append(root.val)
        self.in_order(root.right, a)

        return

    def minDiffInBST(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # it is given that there are at leaset 2 nodes in the tree
        a = []
        self.in_order(root, a)

        m = float('inf')
        i = 0
        while i < len(a) - 1:
            m = min(m, a[i+1] - a[i])
            i += 1
        return m
