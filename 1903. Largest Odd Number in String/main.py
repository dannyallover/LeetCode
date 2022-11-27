class Solution(object):
    def largestOddNumber(self, num):
        """
        :type num: str
        :rtype: str
        """
        right = len(num) - 1
        ans = ""
        while right >= 0:
            if int(num[right]) % 2 != 0:
                return num[:right+1]
            right -= 1
        return ""
