class Solution(object):
    def hardestWorker(self, n, logs):
        """
        :type n: int
        :type logs: List[List[int]]
        :rtype: int
        """
        id_, longest = logs[0][0], logs[0][1]
        for i in range(1, len(logs)):
            if logs[i][1] - logs[i-1][1] > longest:
                id_ = logs[i][0]
                longest = logs[i][1] - logs[i-1][1]
            if logs[i][1] - logs[i-1][1] == longest:
                id_ = min(id_, logs[i][0])
        return id_
