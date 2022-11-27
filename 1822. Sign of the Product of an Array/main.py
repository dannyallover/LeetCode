class Solution(object):
    def arraySign(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num_negative, num_zero = 0, 0
        for num in nums:
            if num == 0:
                num_zero += 1
            elif num < 0:
                num_negative += 1

        if num_zero > 0:
            return 0
        elif num_negative > 0:
            return -1 if num_negative % 2 != 0 else 1
        else:
            return 1
