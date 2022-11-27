class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        i, j = 0, 0
        m = float('inf')
        sum = 0
        while j < len(nums):
            sum += nums[j]
            j += 1
            while i < len(nums) and sum >= target:
                m = min(m, j - i)
                sum -= nums[i]
                i += 1
        return 0 if m == float('inf') else m
