class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n <= 0:
            return False
        p = log(n) / log(4)
        return True if n == pow(4, int(p)) else False
