class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        ret = [0] * len(code)

        if k > 0:
            s = sum(code[:k])
            for i in range(len(code)):
                s -= code[i]
                s += code[(i + k) % len(code)]
                ret[i] = s
            return ret
        elif k < 0:
            s = sum(code[k:])
            for i in range(len(code) - 1, -1, -1):
                s -= code[i]
                s += code[(i + k) % len(code)]
                ret[i] = s
            return ret

        return ret
