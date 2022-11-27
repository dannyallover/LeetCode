class Solution(object):
    def canCompleteCircuit(self, gas, cost):
        """
        :type gas: List[int]
        :type cost: List[int]
        :rtype: int
        """
        d = []
        for x, y in zip(gas, cost):
            d.append(x - y)
        if sum(d) < 0:
            return -1

        cd = []
        cs = 0
        for i in range(len(d) - 1, -1, -1):
            print(i)
            cs += d[i]
            cd.insert(0, cs)

        return cd.index(max(cd))
