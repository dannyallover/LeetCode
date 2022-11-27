class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        dict_1 = {}
        dict_2 = {}
        len1, len2 = len(list1), len(list2)
        for i in range(len1):
            dict_1[list1[i]] = i
        index = float('inf')
        r = []
        for i in range(len2):
            if list2[i] not in dict_1:
                continue
            if i + dict_1[list2[i]] == index:
                r.append(list2[i])
            elif i + dict_1[list2[i]] < index:
                index = i + dict_1[list2[i]]
                r = [list2[i]]
        return r
