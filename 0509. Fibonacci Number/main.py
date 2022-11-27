class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        dp = [0, 1]
        if n == 0:
            return dp[0]
        elif n == 1:
            return dp[1]

        i = 2
        while i <= n:
            val = dp[i-1] + dp[i-2]
            dp.append(val)
            i += 1
        return dp[-1]
