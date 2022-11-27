class Solution(object):
    def maximumSwap(self, num):
        """
        :type num: int
        :rtype: int
        """
        digits = [int(x) for x in str(num)]
        dp = [(0, -1)] * (len(digits) + 1)
        for i in range(len(digits) - 1, -1, -1):
            if dp[i + 1][0] >= digits[i]:
                dp[i] = dp[i + 1]
            else:
                dp[i] = (digits[i], i)
        for i in range(len(digits)):
            if int(digits[i]) < dp[i][0]:
                temp = digits[i]
                digits[i] = dp[i][0]
                digits[dp[i][1]] = temp
                return ''.join([str(x) for x in digits])

        return num
