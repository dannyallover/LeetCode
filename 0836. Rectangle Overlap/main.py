class Solution(object):
    def horizontal_intersection(self, left_rec1, right_rec1, left_rec2, right_rec2):
        if right_rec1 - left_rec1 == 0 or right_rec2 - left_rec2 == 0:
            return False
        elif left_rec2 >= left_rec1 and left_rec2 < right_rec1:
            return True
        elif left_rec1 >= left_rec2 and left_rec1 < right_rec2:
            return True
        else:
            return False
    def vertical_intersection(self, bottom_rec1, top_rec1, bottom_rec2, top_rec2):
        if top_rec1 - bottom_rec1 == 0 or top_rec2 - bottom_rec2 == 0:
            return False
        elif bottom_rec2 >= bottom_rec1 and bottom_rec2 < top_rec1:
            return True
        elif bottom_rec1 >= bottom_rec2 and bottom_rec1 < top_rec2:
            return True
        else:
            return False
    def isRectangleOverlap(self, rec1, rec2):
        """
        :type rec1: List[int]
        :type rec2: List[int]
        :rtype: bool
        """
        x1, y1, x2, y2 = rec1
        top_rec1 = y1 if y1 > y2 else y2
        bottom_rec1 = y2 if y1 > y2 else y1
        left_rec1 = x1 if x1 < x2 else x2
        right_rec1 = x2 if x1 < x2 else x1

        x1, y1, x2, y2 = rec2
        top_rec2 = y1 if y1 > y2 else y2
        bottom_rec2 = y2 if y1 > y2 else y1
        left_rec2 = x1 if x1 < x2 else x2
        right_rec2 = x2 if x1 < x2 else x1

        return self.horizontal_intersection(left_rec1, right_rec1, left_rec2, right_rec2) and self.vertical_intersection(bottom_rec1, top_rec1, bottom_rec2, top_rec2)
