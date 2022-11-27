class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        counts_1, counts_2 = collections.Counter(nums1), collections.Counter(nums2)
        res = []
        for key in counts_1 & counts_2:
            res.extend([key] * min(counts_1.get(key, 0), counts_2.get(key, 0)))
        return res
