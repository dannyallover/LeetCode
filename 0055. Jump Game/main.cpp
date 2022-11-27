// https://leetcode.com/problems/jump-game/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j = nums.size() - 2;
        int jumps = 0;
        while(j >= 0) {
            if(nums[j] > jumps) jumps = 0;
            else jumps += 1;
            j--;
        }
        return jumps == 0;
    }
};
