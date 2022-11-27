class Solution(object):
    def findPoisonedDuration(self, timeSeries, duration):
        """
        :type timeSeries: List[int]
        :type duration: int
        :rtype: int
        """
        total = 0
        for i in range(1, len(timeSeries)):
            if timeSeries[i] <= (timeSeries[i - 1] + duration - 1):
                total += timeSeries[i] - timeSeries[i - 1]
            else:
                total += duration
        total += duration
        return total
