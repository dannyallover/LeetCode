class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums) <= 1:
            return 0

        i = 0
        currMax = 0
        nextMax = 0
        jump = 0
        while i < len(nums) - 1:
            if nums[i] + i > nextMax:
                nextMax = nums[i] + i

            if currMax == i:
                currMax = nextMax
                jump += 1

            i += 1
        return jump
