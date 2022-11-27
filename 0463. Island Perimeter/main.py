class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        # if 1 present
        # if none above it + 1
        # if none to the right + 1
        # if none to the left + 1
        # if none to the bottom + 1
        perimeter = 0
        for r in range(len(grid)):
            for c in range(len(grid[r])):
                if grid[r][c]:
                    if c == 0:
                        perimeter += 1
                    if c == len(grid[r]) - 1:
                        perimeter += 1
                    if r == 0:
                        perimeter += 1
                    if r == len(grid) - 1:
                        perimeter += 1
                    if c > 0 and not grid[r][c - 1]:
                        perimeter += 1
                    if c < len(grid[r]) - 1 and not grid[r][c + 1]:
                        perimeter += 1
                    if r > 0 and not grid[r - 1][c]:
                        perimeter += 1
                    if r < len(grid) - 1 and not grid[r + 1][c]:
                        perimeter += 1
        return perimeter
