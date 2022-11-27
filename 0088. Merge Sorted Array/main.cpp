// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(n+m, 0);
        int i = 0, j = 0, r = 0;
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                temp[r] = nums1[i];
                i++;
            } else {
                temp[r] = nums2[j];
                j++;
            }
            r++;
        }
        while(i < m) {
            temp[r] = nums1[i];
            i++;
            r++;
        }
        while(j < n) {
            temp[r] = nums2[j];
            j++;
            r++;
        }
        nums1 = temp;
    }
};
