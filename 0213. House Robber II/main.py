class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 1:
            return nums[0]
        if len(nums) == 2:
            return max(nums[0], nums[1])

        dp_1 = [0] * (len(nums) - 1)
        dp_2 = [0] * (len(nums) - 1)

        dp_1[0] = nums[0]
        dp_1[1] = max(nums[0], nums[1])
        for i in range(2, len(nums)-1):
            dp_1[i] = max(dp_1[i-1], dp_1[i-2] + nums[i])

        dp_2[0] = nums[1]
        dp_2[1] = max(nums[1], nums[2])
        for i in range(3, len(nums)):
            print(i)
            dp_2[i-1] = max(dp_2[i-2], dp_2[i-3] + nums[i])

        return max(dp_1[-1], dp_2[-1])
