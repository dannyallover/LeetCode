class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        dict_ = {word : True for word in dictionary}
        split = sentence.split()
        for i in range(len(split)):
            sub = ""
            for j in range(len(split[i])):
                sub += split[i][j]
                if sub in dict_:
                    split[i] = sub
                    break
        return ' '.join(split)
