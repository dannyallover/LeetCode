class Solution:
    def twoEggDrop(self, n: int) -> int:
        return ceil((-1.0 + ((4*2*n)**(1/2))) / 2.0)
