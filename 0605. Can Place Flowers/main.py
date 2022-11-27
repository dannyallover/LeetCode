class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        copy = [0] + flowerbed + [0]
        count = 0
        for i in range(1, len(flowerbed) + 1):
            if not copy[i-1] and not copy[i] and not copy[i+1]:
                copy[i] = 1
                count += 1
        return True if count >= n else False
