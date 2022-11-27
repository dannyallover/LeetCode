class Solution(object):
    def findLengthOfLCIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        m, p1, p2 = 0, 0, 1
        while p2 < len(nums):
            if nums[p2] > nums[p2 - 1]:
                p2 +=1
            else:
                m = max(p2 - p1, m)
                p1 = p2
                p2 += 1

        return max(p2 - p1, m)
