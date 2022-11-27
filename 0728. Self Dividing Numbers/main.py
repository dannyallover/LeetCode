class Solution(object):
    def isSelfDividing(self, num):
        for c in str(num):
            if int(c) == 0:
                return False
            if num % int(c) != 0:
                return False
        return True
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        nums = []
        for i in range(left, right + 1):
            if self.isSelfDividing(i):
                nums.append(i)
        return nums
