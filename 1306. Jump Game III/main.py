class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        queue, visited = [], set()
        queue.append(start)
        while queue:
            curr = queue.pop(0)

            if curr in visited:
                continue
            if arr[curr] == 0:
                return True
            visited.add(curr)

            jump = arr[curr]
            if curr + jump < len(arr):
                queue.append(curr + jump)
            if curr - jump >= 0:
                queue.append(curr - jump)
        return False
