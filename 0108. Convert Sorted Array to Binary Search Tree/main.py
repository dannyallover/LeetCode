# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        def dfs(nums: List[int]):
            if len(nums) == 0:
                return None
            elif len(nums) == 1:
                return TreeNode(nums[0])
            mid = len(nums) // 2
            root = TreeNode(nums[mid])
            root.left = dfs(nums[:mid])
            root.right = dfs(nums[mid+1:])
            return root
        return dfs(nums)
