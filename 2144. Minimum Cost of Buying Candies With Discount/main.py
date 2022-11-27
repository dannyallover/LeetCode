class Solution(object):
    def minimumCost(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        cost.sort()
        cost.reverse()
        total = 0
        for k in range(0, len(cost), 3):
            total += sum(cost[k:k+2])
        return total
