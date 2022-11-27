# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def dfs(self, node, sub_root):
        if not node and not sub_root:
            return True
        elif (not node and sub_root) or (node and not sub_root) or (node.val != sub_root.val):
            return False

        return self.dfs(node.left, sub_root.left) and self.dfs(node.right, sub_root.right)

    def isSubtree(self, root, subRoot):
        """
        :type root: TreeNode
        :type subRoot: TreeNode
        :rtype: bool
        """
        queue = []
        queue.append(root)
        while queue:
            node = queue.pop(0)
            if not node:
                continue
            if node.val == subRoot.val and self.dfs(node, subRoot):
                return True
            queue.append(node.left)
            queue.append(node.right)

        return False
