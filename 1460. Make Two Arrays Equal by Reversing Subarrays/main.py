class Solution(object):
    def canBeEqual(self, target, arr):
        """
        :type target: List[int]
        :type arr: List[int]
        :rtype: bool
        """
        count_target, count_arr = {}, {}
        if len(target) != len(arr):
            return false

        for num1, num2 in zip(target, arr):
            if num1 not in count_target:
                count_target[num1] = 0
            if num2 not in count_arr:
                count_arr[num2] = 0
            count_target[num1] += 1
            count_arr[num2] += 1

        return count_target == count_arr
