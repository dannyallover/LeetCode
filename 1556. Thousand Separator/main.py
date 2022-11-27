class Solution(object):
    def thousandSeparator(self, n):
        """
        :type n: int
        :rtype: str
        """
        s_n = str(n)
        if n < 1000:
            return s_n

        k = 1
        res = ""
        for char in s_n[::-1]:
            res = char + res
            if k % 3 == 0:
                res = "." + res
            k += 1

        return res[1:] if res[0] == "." else res
