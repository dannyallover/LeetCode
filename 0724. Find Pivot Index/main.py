class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum1, sum2 = 0, sum(nums[1:])
        if sum1 == sum2:
            return 0
        index = 1
        while index < len(nums):
            sum2 -= nums[index]
            sum1 += nums[index - 1]
            if sum1 == sum2:
                return index
            index += 1

        return -1
