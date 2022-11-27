class Solution(object):
    def sumZero(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        pos = [i for i in range(1, (n/2) + 1)]
        neg = [-i for i in range (1, (n/2) + 1)]
        return pos + neg + [0] if n % 2 != 0 else pos + neg
