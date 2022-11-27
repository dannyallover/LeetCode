class Solution(object):
    def totalMoney(self, n):
        """
        :type n: int
        :rtype: int
        """
        r = n % 7
        z = int(n / 7)
        ans = 7*(z*(z + 1)/2) + 21*z
        ans += r*(z) + (r*(r + 1)/2)
        return ans
