class Solution(object):
    def helper(self, k, n, total, nums, curr, solutions):
        if k == 0 and total == n:
            solutions.append(curr)
        for i in range(len(nums)):
            curr.append(nums[i])
            self.helper(k - 1, n, total + nums[i], nums[i+1:], list(curr), solutions)
            curr.pop()
        return

    def combinationSum3(self, k, n):
        """
        :type k: int
        :type n: int
        :rtype: List[List[int]]
        """
        solutions = []
        nums = [i for i in range(1, 10)]
        self.helper(k, n, 0, nums, [], solutions)
        return solutions
