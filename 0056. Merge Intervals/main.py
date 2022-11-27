class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals = sorted(intervals)
        print(intervals)
        length = len(intervals)
        if length == 1:
            return intervals
        i = 1
        res = []
        while i <= length:
            contiguous = True
            start, end = intervals[i-1][0], intervals[i-1][1]
            while contiguous and i < length:
                if intervals[i][1] <= end or (intervals[i][1] > end and intervals[i][0] <= end) :
                    start, end = min(start, intervals[i][0]), max(end, intervals[i][1])
                    i += 1
                else:
                    contiguous = False
            i += 1
            res.append([start, end])
        return res
