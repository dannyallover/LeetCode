class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        count_zeros = 0
        for x in arr:
            if not x:
                count_zeros += 1
        for i in range(len(arr) - 1, -1, -1):
            print(i)
            if arr[i] == 0:
                if i + count_zeros < len(arr):
                    arr[i + count_zeros] = 0
                if i + count_zeros - 1 < len(arr):
                    arr[i + count_zeros - 1] = 0
                count_zeros -= 1
            elif arr[i] != 0:
                if i + count_zeros < len(arr):
                    arr[i + count_zeros] = arr[i]
        return arr
