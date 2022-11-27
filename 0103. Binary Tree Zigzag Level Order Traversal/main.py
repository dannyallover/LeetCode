# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        q = []
        q.append((root, 1))
        a = []
        while q:
            node, level = q.pop(0)
            if not node:
                continue
            if len(a) != level:
                a.append([])

            if level % 2 == 0:
                a[level-1].insert(0, node.val)
            else:
                a[level-1].append(node.val)

            q.append((node.left, level + 1))
            q.append((node.right, level + 1))

        return a
