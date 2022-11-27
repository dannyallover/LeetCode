// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high) {
            int mid = (low + high + 1) / 2;
            if(nums[mid] == target) return mid;
            if(nums[low] == target) return low;
            if(nums[high] == target) return high;
            if(nums[mid] > nums[high]) { // mid is in the higher elements
                if(nums[mid] < target) low = mid;
                else if(nums[mid] > target && target > nums[high]) high = mid;
                else if(nums[mid] > target && target < nums[high]) low = mid;
            } else if(nums[mid] < nums[high]) { // mid is in the lower elements
                if(nums[mid] > target) high = mid;
                else if(nums[mid] < target && target < nums[high]) low = mid;
                else if(nums[mid] < target && target > nums[high]) high = mid;
            } else {
                return -1;
            }
        }
        return -1;
    }
};
