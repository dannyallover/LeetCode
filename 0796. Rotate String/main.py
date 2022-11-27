class Solution(object):
    def rotateString(self, s, goal):
        """
        :type s: str
        :type goal: str
        :rtype: bool
        """
        for i in range(len(s)):
            s1 = s[:i]
            s2 = s[i:]
            if s1 + s2 == goal or s2 + s1 == goal:
                return True
        return False
