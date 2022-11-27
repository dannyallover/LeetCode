class Solution(object):
    def kClosest(self, points, k):
        """
        :type points: List[List[int]]
        :type k: int
        :rtype: List[List[int]]
        """
        closest = [(p, math.sqrt(pow(p[0], 2) + pow(p[1], 2))) for p in points]
        closest.sort(key = lambda x: x[1])
        return [closest[i][0] for i in range(0, k)]
