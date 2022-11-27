class Solution:
    def mySqrt(self, x: int) -> int:
        low = 1
        high = x
        while low <= high:
            mid = floor((low + high) / 2)
            if mid * mid < x:
                low = mid + 1
            elif mid * mid > x:
                high = mid - 1
            else:
                return floor(mid)
        return floor(high)
