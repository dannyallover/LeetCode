class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        
        permuteRecursive(nums, 0, result);
        return result;
    }
    
    void permuteRecursive(vector<int> &nums, int start, vector<vector<int>> &result) {
        if(start == nums.size()) {
            result.push_back(nums);
            return;
        }
        for(int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]); // swap
            permuteRecursive(nums, start + 1, result); // add 1 to start so we don't go over already chosen numbers
            swap(nums[start], nums[i]); // undo
        }
    }
};
