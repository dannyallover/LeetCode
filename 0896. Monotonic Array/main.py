class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        decreasing = False
        increasing = False
        for n1, n2 in zip(nums[:-1], nums[1:]):
            if n2 - n1 > 0:
                increasing = True
            elif n1 - n2 > 0:
                decreasing = True
        return (not decreasing and not increasing) or (decreasing and not increasing) or (increasing and not decreasing)
