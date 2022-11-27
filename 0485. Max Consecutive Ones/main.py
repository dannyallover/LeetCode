class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        length = len(nums)
        if length == 0:
            return 0
        if length == 1:
            return 1 if nums[0] == 1 else 0
        m = 0
        p1, p2 = 0, 0
        while p2 < length:
            if nums[p2] == 1:
                m = max(m, p2 - p1 + 1)
            else:
                p1 = p2 + 1
            p2 += 1
        return m
