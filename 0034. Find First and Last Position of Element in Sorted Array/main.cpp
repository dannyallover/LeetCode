// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int low = 0;
        int high = nums.size() - 1;
        int pos = 0;

        if(nums.size() == 0)
            return {-1, -1};

        while(low <= high) {
            pos = (low + high) / 2;
            if(nums[pos] == target) {
                low = pos;
                high = pos;
                while(low - 1 >= 0 && nums[low - 1] == target) {
                    low--;
                }
                while(high + 1 < nums.size() && nums[high + 1] == target) {
                    high++;
                }
                res.push_back(low);
                res.push_back(high);
                return res;
            }
            if(nums[pos] < target) {
                low = pos + 1;
            }
            if(nums[pos] > target) {
                high = pos - 1;
            }
        }

        return {-1, -1};
    }
};
