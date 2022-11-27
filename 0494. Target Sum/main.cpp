// https://leetcode.com/problems/target-sum/

class Solution {
public:
    int OFFSET = 1000;
    int findSum(vector<int> &nums, int S, int index, int currSum, vector<vector<int>> &memo) {
        if(index == nums.size()) {
            if(currSum == S) {
                return 1;
            } else {
                return 0;
            }
        } else if(memo[index][currSum + OFFSET] != INT_MIN) {
            return memo[index][currSum + OFFSET];
        }
        int add = findSum(nums, S, index + 1, currSum + nums[index], memo);
        int subtract = findSum(nums, S, index + 1, currSum - nums[index], memo);
        memo[index][currSum + OFFSET] = add + subtract;
        return memo[index][currSum + OFFSET];
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        vector<vector<int>> memo(nums.size(), vector<int> (2000, INT_MIN));
        return findSum(nums, S, 0, 0, memo);
    }
};
