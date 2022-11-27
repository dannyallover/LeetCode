class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        if len(list(pattern)) != len(s.split(' ')):
            return False
        d_f = {}
        d_b = {}
        already_mapped = set()
        for x, y in zip(list(pattern), s.split(' ')):
            if x not in d_f:
                d_f[x] = y
            elif d_f[x] != y:
                return False

            if y not in d_b:
                d_b[y] = x
            elif d_b[y] != x:
                return False
        return True
