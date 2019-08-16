// Written by: dannyallover
// Date: 08/15/2019
// Description:
// There are two sorted arrays nums1 and nums2 of size m and n respectively.
// Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
// You may assume nums1 and nums2 cannot be both empty.
// Example 1:
// nums1 = [1, 3]
// nums2 = [2]
// The median is 2.0
// Example 2:
// nums1 = [1, 2]
// nums2 = [3, 4]
// The median is (2 + 3)/2 = 2.5
// Time Complexity: O(M + N) where M is the length of nums1 and N is the length of nums2
// Space Complexity: O(M + N) where M is the length of nums1 and N is the length of nums2
// Runtime: My runtime beats 99.81% of c++ solutions.
// */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        int pos = size/2;
        int temp = 0;
        int temp2 = 0;
        int i = 0;
        int j = 0;
        while(i + j <= pos) {
            if(i >= nums1.size()) {
                temp = temp2;
                temp2 = nums2[j];
                j++;
            } else if(j >= nums2.size()) {
                temp = temp2;
                temp2 = nums1[i];
                i++;
            } else {
                if(nums1[i] < nums2[j]) {
                    temp = temp2;
                    temp2 = nums1[i];
                    i++;
                } else {
                    temp = temp2;
                    temp2 = nums2[j];
                    j++;
                }
            }
        }
        if(size % 2 == 0)
            return (double)(temp + temp2)/2;
        return temp2;
    }
};
