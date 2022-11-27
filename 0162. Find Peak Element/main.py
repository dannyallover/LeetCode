class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return 0
        elif n == 2:
            return 0 if nums[0] > nums[1] else 1
        low = 1
        high = n - 2
        while low <= high:
            mid = (low + high) // 2
            if nums[mid - 1] < nums[mid] and nums[mid] > nums[mid + 1]:
                return mid
            elif nums[mid - 1] > nums[mid]:
                high = mid - 1
            elif nums[mid + 1] > nums[mid]:
                low = mid + 1
        if nums[0] > nums[1]:
            return 0
        elif nums[n - 1] > nums[n - 2]:
            return n - 1
        return -1
