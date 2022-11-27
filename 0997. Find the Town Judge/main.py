class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        if len(trust) == 0 and n == 1:
            return 1

        d = {}
        for t in trust:
            source, rec = t
            d[source] = -1
            if rec not in d:
                d[rec] = 1
            elif d[rec] != -1:
                d[rec] += 1

        for k, v in d.items():
            if v == n - 1:
                return k

        return -1
