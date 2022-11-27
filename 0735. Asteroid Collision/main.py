class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack = []
        res = []
        for i in range(len(asteroids)):
            if asteroids[i] > 0:
                stack.append(asteroids[i])
            if asteroids[i] < 0:
                destroy = True
                same = False
                while destroy and stack:
                    if abs(stack[-1]) > abs(asteroids[i]):
                        destroy = False
                    elif abs(stack[-1]) == abs(asteroids[i]):
                        stack.pop()
                        destroy = False
                        same = True
                    else:
                        stack.pop()
                if not stack and not same:
                    res.append(asteroids[i])
        res.extend(stack)
        return res
