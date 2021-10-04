// https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        int sum = 0;
        int closest = nums[0] + nums[1] + nums[2];
        int difference = abs(target - closest);
        int low = 0;
        int high = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++) {
            low = i + 1;
            while(low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if(abs(target - sum) < difference) {
                    closest = sum;
                    difference = abs(target - closest);
                }
                if(sum < target) {
                    low++;
                }
                else if(sum > target) {
                    high--;
                }
                else {
                    return target;
                }
            }
            high = nums.size() - 1;
        }

        return closest;
    }
};
