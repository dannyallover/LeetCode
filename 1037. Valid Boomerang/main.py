class Solution(object):
    def isBoomerang(self, points):
        """
        :type points: List[List[int]]
        :rtype: bool
        """
        if points[0] == points[1] or points[1] == points[2] or points[0] == points[2]:
            return False
        boomerang = False
        if (points[1][0] - points[0][0]) == 0:
            m1 = float('Inf')
            b1 = float('Inf')
        else:
            m1 = (points[1][1] - points[0][1]) / float((points[1][0] - points[0][0]))
            b1 = points[1][1] - m1*points[1][0]
        if (points[2][0] - points[1][0]) == 0:
            m2 = float('Inf')
            b2 = float('Inf')
        else:
            m2 = (points[2][1] - points[1][1]) / float((points[2][0] - points[1][0]))
            b2 = points[1][1] - m2*points[1][0]
        return m1 != m2 or (m1 == m2 and b1 != b2)
