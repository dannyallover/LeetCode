class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        p1, p2 = 0, k
        curr_sum = sum(nums[:k])
        max_sum = curr_sum
        while p2 < len(nums):
            curr_sum -= nums[p1]
            curr_sum += nums[p2]
            p1 += 1
            p2 += 1
            if curr_sum > max_sum:
                max_sum = curr_sum
        return float(max_sum) / k
