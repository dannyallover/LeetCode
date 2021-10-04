// https://leetcode.com/problems/subsets/

class Solution {
public:
    void fillPowerSet(vector<vector<int>> &powerSet, vector<int> nums, vector<int> curr, int index) {
        vector<int> temp = curr;
        for(int i = index; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            powerSet.push_back(temp);
            fillPowerSet(powerSet, nums, temp, i+1);
            temp = curr;
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerSet;
        fillPowerSet(powerSet, nums, {}, 0);
        powerSet.push_back({});
        return powerSet;
    }
};
