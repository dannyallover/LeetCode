class Solution:
    def climbStairs(self, n: int) -> int:
        arr = [0 for i in range(max(n + 1, 3))]
        arr[1] = 1
        arr[2] = 2
        if n < 3:
            return arr[n]
        i = 3
        while i <= n:
            arr[i] = arr[i - 1] + arr[i - 2]
            i += 1
        return arr[n]
