class Solution(object):
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """

        return int((sqrt(1 + 8*n) - 1) // 2)
