class Solution(object):
    def findLongestChain(self, pairs):
        """
        :type pairs: List[List[int]]
        :rtype: int
        """
        pairs.sort()
        dp = [1] * len(pairs)
        i = 0
        while i < len(pairs):
            j = 0
            while j < i:
                if pairs[j][1] < pairs[i][0]:
                    dp[i] = max(dp[i], 1 + dp[j])
                j += 1
            i += 1
        return dp[-1]
