class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s = set()
        for x in nums:
            s.add(x)
        if len(s) < 3:
            return max(nums)

        m = max(nums)
        distance = 1000000000000000
        for x in nums:
            if x < m and m - x < distance:
                distance = m - x
        m -= distance

        distance = 1000000000000000
        for x in nums:
            if x < m and m - x < distance:
                distance = m - x
        return m - distance
