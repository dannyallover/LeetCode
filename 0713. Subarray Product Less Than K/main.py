class Solution(object):
    def numSubarrayProductLessThanK(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        p1, p2 = 0, 0
        curr = 1
        ans = 0
        num = 0
        while p1 < len(nums):
            print(num)
            if p2 < len(nums) and curr * nums[p2] < k:
                curr *= nums[p2]
                num += 1
                ans += num
                p2 += 1
            else:
                curr = max(1, curr / nums[p1])
                num = max(0, num - 1)
                p1 += 1
            if p1 > p2:
                p2 = p1
        return ans
