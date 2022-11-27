# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        def ancestors(node: 'TreeNode', target: 'TreeNode', path: List['TreeNode']) -> bool:
            if not node:
                return False
            if node == target:
                return True
            if ancestors(node.left, target, path) or ancestors(node.right, target, path):
                path.append(node)
                return True
            return False
        a1, a2 = [], []
        ancestors(root, p, a1)
        ancestors(root, q, a2)
        a1, a2 = a1[::-1], a2[::-1]
        if q in a1:
            return q
        if p in a2:
            return p
        length = min(len(a1), len(a2))
        i = 0
        while i < length:
            if a1[i] != a2[i]:
                break
            i += 1
        return a1[i-1]
