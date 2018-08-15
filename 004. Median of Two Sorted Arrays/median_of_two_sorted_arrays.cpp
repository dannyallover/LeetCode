/*
Written by: dannyallover
Date: 8/13/2018

Description:
There are two sorted arrays nums1 and nums2 of size m and n respectively.
Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
You may assume nums1 and nums2 cannot be both empty.

Example 1:
nums1 = [1, 3]
nums2 = [2]
The median is 2.0
Example 2:
nums1 = [1, 2]
nums2 = [3, 4]
The median is (2 + 3)/2 = 2.5

Time Complexity: O(M + N) where M is the length of nums1 and N is the length of nums2
Space Complexity: O(M + N) where M is the length of nums1 and N is the length of nums2

Runtime: My runtime beats 25.26% of c++ solutions.
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int i = 0;
        int j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                nums.push_back(nums1[i]);
                i++;
            }
            else {
                nums.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size()) {
            nums.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size()) {
            nums.push_back(nums2[j]);
            j++;
        }
        
        int size = nums.size();
        if(size % 2 == 0)
            return (nums[(size / 2) - 1] + nums[(size / 2)]) / 2.0;
        else
            return nums[(size / 2)];
    }
};
