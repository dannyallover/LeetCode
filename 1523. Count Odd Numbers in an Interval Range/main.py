class Solution(object):
    def countOdds(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: int
        """
        n = high - low + 1
        if n % 2 == 0:
            return n / 2

        if low % 2 == 0:
            return n/2
        else:
            return n/2 + 1
