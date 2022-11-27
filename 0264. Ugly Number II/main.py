class Solution(object):
    def nthUglyNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        factors = [2, 3, 5]
        starts = [0, 0, 0]
        arr = [1]
        while len(arr) < n:
            nums = [arr[starts[i]]*factors[i] for i in range(3)]
            min_num = min(nums)
            indices_min_num = [i for i, x in enumerate(nums) if x == min_num]
            for indx in indices_min_num:
                starts[indx] += 1
            arr.append(min_num)
        return arr[-1]
