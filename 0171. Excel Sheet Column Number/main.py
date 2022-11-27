class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        c = 0
        i, j = len(columnTitle) - 1, 0
        while i >= 0:
            c += pow(26, i) * (ord(columnTitle[j]) - 64)
            i -= 1
            j += 1
        return c
