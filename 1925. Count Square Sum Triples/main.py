class Solution(object):
    def countTriples(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        for i in range(1, n+1):
            for j in range(1, n+1):
                a, b = pow(i, 2), pow(j, 2)
                c = pow(int(sqrt(a + b)), 2)
                if sqrt(c) <= n and c >= 1 and a + b == c:
                    count += 1
        return count
