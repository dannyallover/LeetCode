class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if num / 10 == 0:
            return num
        else:
            sum = 0
            while num > 0:
                sum += num % 10
                num /= 10
            return self.addDigits(sum)
