class Solution(object):
    def averageValue(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        total = 0
        count = 0
        for x in nums:
            if x % 2 == 0 and x % 3 == 0:
                total += x
                count += 1
        return (total / count) if count > 0 else 0
