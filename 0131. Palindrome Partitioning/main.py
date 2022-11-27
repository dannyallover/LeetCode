class Solution:
    def helper(self, s: str, p: List[str], ans: List[List[str]]):
        if len(s) == 0:
            ans.append(p)
            return
        if len(s) == 1:
            ans.append(p + [s])
            return
        sub = ""
        for i in range(len(s)):
            sub += s[i]
            if sub == sub[::-1]:
                self.helper(s[i+1::], p + [sub], ans)


    def partition(self, s: str) -> List[List[str]]:
        ans = []
        self.helper(s, [], ans)
        return ans
