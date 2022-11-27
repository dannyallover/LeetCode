# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def findMode(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if not root:
            return []

        nums = []
        q = []
        q.append(root)
        while q:
            node = q.pop(0)
            if not node:
                continue

            nums.append(node.val)
            q.append(node.left)
            q.append(node.right)

        c = Counter(nums)
        m = max(c.values())
        return [k for k, v in c.most_common() if v == m]
