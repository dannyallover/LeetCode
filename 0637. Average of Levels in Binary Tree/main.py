# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        queue = []
        queue.append((root, 0))

        sums = []
        while queue:
            node, level = queue.pop(0)
            if not node:
                continue

            if len(sums) == level:
                sums.append([0, 0])

            sums[level][0] += node.val
            sums[level][1] += 1

            queue.append((node.left, level + 1))
            queue.append((node.right, level + 1))

        return [float(l[0]) / l[1] for l in sums]
