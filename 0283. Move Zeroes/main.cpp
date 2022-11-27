// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        return;
    }
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(j < i) j = i;
            if(nums[i] == 0) {
                while(j < nums.size() && nums[j] == 0) j++;
                if(j < nums.size()) swap(nums, i, j);
            }
        }
        return;
    }
};
