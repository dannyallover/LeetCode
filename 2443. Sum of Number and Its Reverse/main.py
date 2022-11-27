class Solution(object):
    def sumOfNumberAndReverse(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num == 0:
            return True
        for x in range(num//2, num):
            if int(str(x)[::-1]) + x == num:
                return True
        return False
