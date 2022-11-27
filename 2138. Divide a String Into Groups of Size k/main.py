class Solution(object):
    def divideString(self, s, k, fill):
        """
        :type s: str
        :type k: int
        :type fill: str
        :rtype: List[str]
        """
        round_up = int(ceil(len(s)*1.0 / k))
        ans_ = [[] for _ in range(round_up)]
        for i in range(len(s)):
            ans_[i//k].append(s[i])
        for i in range((round_up*k) - len(s)):
            ans_[-1].append(fill)
        ans = []
        for sub in ans_:
            ans.append(''.join(sub))
        return ans
