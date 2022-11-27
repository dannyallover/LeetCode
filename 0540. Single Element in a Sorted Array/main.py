class Solution(object):
    def singleNonDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num = 0
        for x in nums:
            num ^= x
        return num
