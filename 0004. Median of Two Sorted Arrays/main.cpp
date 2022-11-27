// https://leetcode.com/problems/median-of-two-sorted-arrays/

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
