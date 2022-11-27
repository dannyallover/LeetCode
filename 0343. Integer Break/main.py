class Solution(object):
    def integerBreak(self, n):
        """
        :type n: int
        :rtype: int
        """
        # n = 10
        if n == 2:
            return 1
        if n == 3:
            return 2
        if n == 4:
            return 4
        if n == 5:
            return 6
        r = n % 3
        if r == 0:
            return pow(3, n/3)
        if r == 1:
            return pow(3, (n/3) - 1) * 4
        else:
            return pow(3, n/3) * r
